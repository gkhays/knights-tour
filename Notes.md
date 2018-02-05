## Other Solutions from the Internet

Since @slg has implemented a backtracking algorithm and we have added a visualization, it is safe to visit the Internet to see what others say.

### Backtracking | Set 1 (The Knight’s tour problem)

```
If all squares are visited 
    print the solution
Else
   a) Add one of the next moves to solution vector and recursively 
   check if this move leads to a solution. (A Knight can make maximum 
   eight moves. We choose one of the 8 moves in this step).
   b) If the move chosen in the above step doesn't lead to a solution
   then remove this move from the solution vector and try other 
   alternative moves.
   c) If none of the alternatives work then return false (Returning false 
   will remove the previously added item in recursion and if false is 
   returned by the initial call of recursion then "no solution exists" )
```

[Geeks for Geeks Solution](http://www.geeksforgeeks.org/backtracking-set-1-the-knights-tour-problem/).

### Backtracking — Knight’s Tour Problem

![](http://algorithms.tutorialhorizon.com/files/2015/05/8-moves-of-a-Knight-1.png)

[Tutorial Horizon Solution](http://algorithms.tutorialhorizon.com/backtracking-knights-tour-problem/).

### How to optimize Knight's tour algorithm?

From StackOverflow.

![](http://i.stack.imgur.com/dfUrj.png)

[Discussion on StackOverflow](https://stackoverflow.com/questions/19214109/how-to-optimize-knights-tour-algorithm).

### Making backtracking Knight's Tours solution more efficient

```
BOARD_LENGTH = 5;

Enter starting row (0-7): 2
Enter starting column (0-7): 3
No Solution!
BOARD_LENGTH = 7;

Enter starting row (0-7): 0
Enter starting column (0-7): 0
1       14      3       38      5       34      7       
12      39      10      33      8       37      26      
15      2       13      4       25      6       35      
40      11      32      9       36      27      44      
19      16      21      24      45      48      29      
22      41      18      31      28      43      46      
17      20      23      42      47      30      49

Even for board length of 7 it takes a long time to compute if the starting location is not (0, 0).

In what ways can I improve the time of computing a solution for this program?
```

[Code Review Discussion](https://codereview.stackexchange.com/questions/66888/making-backtracking-knights-tours-solution-more-efficient).

### Large Knight's Tours

![](https://i0.wp.com/www.gilith.com/chess/knights/tile6x6r.png)

[The Robot Mathematician](https://gilith.wordpress.com/2013/02/20/large-knights-tours/).

### Knight's tour

On Wikipedia.

![](https://upload.wikimedia.org/wikipedia/commons/d/da/Knight%27s_tour_anim_2.gif)

![](https://upload.wikimedia.org/wikipedia/commons/c/ca/Knights-Tour-Animation.gif)

![](https://upload.wikimedia.org/wikipedia/commons/thumb/6/64/Knight%27s_graph_showing_number_of_possible_moves.svg/1024px-Knight%27s_graph_showing_number_of_possible_moves.svg.png)

[Wikipedia Article](https://en.wikipedia.org/wiki/Knight%27s_tour).
