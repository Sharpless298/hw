#include <stdio.h>

int main() {
	int x;
	printf("x is allocated at memory address 0x%lx-0x%lx.\n", &x, (unsigned long)(&x)+sizeof(x)-1);
}
