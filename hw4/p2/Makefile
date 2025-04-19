all: Main.c Sudoku.o
	gcc Main.c Sudoku.o
Sudoku.o: Sudoku.c Sudoku.h
	gcc -c Sudoku.c
clean:
	rm -f *.o *~ a.out
