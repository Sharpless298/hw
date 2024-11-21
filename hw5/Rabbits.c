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
	printf("|%-10d|%-10d|%-10d|%-10d|%-10d\n", 1, 1, 0, 0, 0);
	int a = 0, b = 1, c = 0;
	for(int i=1; i<n; i++) {
		printf("|%-10d|%-10d|%-10d|%-10d|%-10d\n", i+1, a, b, c, a+b+c);
		int t = a;
		a = a + b, c = a, b = t;
	}
}
