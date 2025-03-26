all: Main.c TimeAdder.o
	gcc Main.c TimeAdder.o
TimeAdder.o: TimeAdder.c TimeAdder.h
	gcc -c TimeAdder.c
clean:
	rm -f a.out *.c~ *.o*
