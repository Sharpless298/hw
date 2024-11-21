#include <stdio.h>

int main() {
	printf("Please input an integer greater than or equal to 3: ");
	int n;
	scanf("%d", &n);
	if(n < 3) {
		printf("Input Error!\n");
		return 0;
	}

	for(int i=0; i<n; i++) {
		for(int j=0; j<n-i-1; j++) printf(" ");
		for(int j=0; j<1+2*i; j++) printf("+");
		printf("\n");
	}
	for(int i=0; i<n-1; i++) {
		for(int j=0; j<i+1; j++) printf(" ");
		for(int j=0; j<(n-1-i)*2-1; j++) printf("+");
		printf("\n");
	}
}
