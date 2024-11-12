#include <stdio.h>

int main() {
	printf("Please input an integer: ");
	int n;
	scanf("%d", &n);
	if(n <= 0) {
		printf("Input error!\n");
		return 0;
	}
	for(int i=0; i<15; i++) {
		if(n == (1<<i)) {
			printf("%d is 2 to the power of %d.\n", n, i);
			return 0;
		}
	}
	printf("%d is not a power of 2.\n", n);
}
