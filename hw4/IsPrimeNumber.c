#include <stdio.h>

int main() {
	printf("Please input an integer: ");
	int n;
	scanf("%d", &n);
	for(int i=2; i*i<=n; i++) {
		if(n%i == 0) {
			printf("The integer %d is not a prime number!\n", n);
			return 0;
		}
	}

	printf("The integer %d is a prime number.\n", n);
}
