#include <stdio.h>

int main() {
	printf("Please input an integer: ");
	int n, f = 0;
	scanf("%d", &n);
	
	if(n <= 0) {
		printf("Input Error\n");
		return 0;
	}
	
	long long sum = 0;
	for(int i=2; i<n; i++) {
		int t = 0;
		for(int j=2; j*j<=i; j++) {
			if(i%j == 0) {
				t = 1;
				break;
			}
		}

		if(!t) {
			f = 1;
			if(i != 2) printf(" + ");
			sum += i;
			printf("%d", i);
		}
	}

	if(!f) {
		printf("There isn't any prime number between 1 and %d.\n", n);
		return 0;
	}
	printf(" = %lld\n", sum);
}
