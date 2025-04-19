#include <stdio.h>
#include "Sudoku.h"
#define true 1
#define false 0
int main(){
    int board[9][9];
 
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf(" %d", &board[i][j]);
        }
    }
 
    (isValidSudoku(board) == true) ? 
        printf("Valid\n") : 
        printf("Invalid!\n");
}
