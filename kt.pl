#!/usr/bin/perl

use strict;
use warnings;

my $N = 8;

my @xm = ( 2, 1, -1, -2, -2, -1,  1,  2 );
my @ym = ( 1, 2,  2,  1, -1, -2, -2, -1 );

my @ar = ();

sub initialize_board {
    for (my $i=0; $i<$N; $i++) {
        for (my $j=0; $j<$N; $j++) {
            $ar[$i][$j] = -1;
        }
    }
}

sub print_board {
    for (my $i=0; $i<$N; $i++) {
        for (my $j=0; $j<$N; $j++) {
            #print " $ar[$i][$j]";
            printf "%*d", 3, $ar[$i][$j];
        }
        print "\n";
    }
}

sub can_move {
    my $x = shift;
    my $y = shift;
    return ($x>=0 && $x<$N && $y>=0 && $y<$N && $ar[$x][$y] == -1); 
}

sub walk_board {
    my $x = shift;
    my $y = shift;
    my $m = shift;

    my $next_x;
    my $next_y;

    if ($m == $N*$N) {
        return 1;
    }

    for (my $i=0; $i<$N; $i++) {
        $next_x = $x + $xm[$i];
        $next_y = $y + $ym[$i];

        if (can_move($next_x, $next_y)) {
            $ar[$next_x][$next_y] = $m;
            if (walk_board($next_x, $next_y, $m+1) == 1) {
                return 1;
            } else {
                $ar[$next_x][$next_y] = -1;
            }
        }
    }
    return 0;
}

sub main {
    initialize_board();
    $ar[0][0] = 0;
    if (walk_board(0, 0, 1) == 0) {
        print "no solution.";
    } else {
        print_board();
    }
}

main();
