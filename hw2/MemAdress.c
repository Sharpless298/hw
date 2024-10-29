#include <stdio.h>

int main() {
	int x;
	printf("x is allocated at memory address %p-%p.\n", &x, (unsigned long)(&x)+sizeof(x)-1);
}
