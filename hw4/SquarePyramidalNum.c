#include <stdio.h>

int main() {
	printf("Please input an integer: ");
	int n;
	scanf("%d", &n);
	if(n>20 || n<0) {
		printf("Input Error");
		return 0;
	}
	if(n==0 || n==1) {
		printf("%d! = 1\n", n);
		return 0;
	}
	long long ans = 1;
	printf("%d! = ", n);
	for(int i=0; i<n; i++) {
		if(i) printf(" * ");
		printf("%d", i+1);
		ans *= i+1;
	}

	printf(" = %lld", ans);
}
