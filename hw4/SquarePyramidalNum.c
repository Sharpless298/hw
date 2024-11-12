#include <stdio.h>

int main() {
	printf("Please input an integer: ");
	int n;
	long long ans = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		if(i) printf(" + ");
		printf("%lld", 1LL*(i+1)*(i+1));
		ans += (i+1)*(i+1);
	}
	printf(" = %lld\n", ans);
}
