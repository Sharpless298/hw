#include "Sudoku.h"

// This could be wrong, because I'm lazy.
int isValidSudoku(int board[][9]) {
	for (int i = 0; i < 9; i++) {
		int cnt = 0;
		for (int j = 0; j < 9; j++) {
			cnt += board[i][j];
		}
		if (cnt != 45) return 0;
	}
	for (int i = 0; i < 9; i++) {
		int cnt = 0;
		for (int j = 0; j < 9; j++) {
			cnt += board[j][i];
		}
		if (cnt != 45) return 0;
	}
	return 1;
}
