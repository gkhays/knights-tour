#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int N = 8;

void initialize_board(int a[N][N]); 
void print_board(int a[N][N]);
bool walk_board(int x, int y, int m, int a[N][N], int xm[], int ym[]);
bool can_move(int x, int y, int a[N][N]);

typedef struct {
    int x;
    int y;
} knight_move;

int main() {
    int ar[N][N]; 
    initialize_board(ar);
    ar[0][0] = 0; 

    knight_move moves[] = { 2,1, 1,2, -1,2, -2,1, -2,-1, -1,-2, 1,-2, 2,-1 };

    int xm[N];
    int ym[N];

    for (int i=0; i<N; i++) {
        xm[i] = moves[i].x;
        ym[i] = moves[i].y;
    }

    if (walk_board(0, 0, 1, ar, xm, ym) == false) {
        printf("no solution.\n"); 
        exit(-1); 
    } else {
        print_board(ar); 
        exit(42);
    }
    return 0;
}

bool walk_board(int x, int y, int m, int a[N][N], int xm[], int ym[]) {
    int next_x; 
    int next_y; 

    if (m == N*N) {
        return true;
    }

    for (int i=0; i<N; i++) {
        next_x = x + xm[i]; 
        next_y = y + ym[i]; 
        if (can_move(next_x, next_y, a)) {
            a[next_x][next_y] = m;
            if (walk_board(next_x, next_y, m+1, a, xm, ym) == true) {
                return true;
            } else {
                a[next_x][next_y] = -1;
            }
        }
    }
    return false;
}

bool can_move(int x, int y, int a[N][N]) {
    return(x>=0 && x<N && y>=0 && y<N && a[x][y] == -1);  
}

void initialize_board(int a[N][N]) {
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            a[i][j] = -1;
        }
    }
}

void print_board(int a[N][N]) {
    int width = 3;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            printf("%*d", width, a[i][j]); 
        }
        printf("\n"); 
    }
    printf("\n\n"); 
}
