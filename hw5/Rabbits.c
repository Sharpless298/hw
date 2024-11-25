#include <stdio.h>

int main() {
	printf("Enter n month: ");
	int n;
	scanf("%d", &n);
	if(n<=0 || n>40) {
		printf("Error! Out of range.\n");
		return 0;
	}

	printf("|(n)th     |newborn   |growing   |matured   |total     \n");
	int a = 1, b = 0, c = 0;
	for(int i=0; i<n; i++) {
		printf("|%-10d|%-10d|%-10d|%-10d|%-10d\n", i+1, a, b, c, a+b+c);
		c = c + b;
		b = a;
		a = c;
	}
}
