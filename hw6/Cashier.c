#include <stdio.h>
#include <string.h>

int main() {
	printf("Enter the total amount: ");
	int a;
	scanf("%d", &a);
	printf("Enter the amount paid: ");
	int b;
	scanf("%d", &b);

	int c[7] = {1000, 500, 100, 50, 10, 5, 1};
	int d[7];
	memset(d, 0, sizeof(d));
	int t = b-a;
	
	if(a<=0 || b<=0) {
		printf("Invalid value\n");
		return 0;
	}
	
	if(t < 0) {
		printf("Invalid input\n");
		return 0;
	}

	for(int i=0; i<7; i++) {
		d[i] = t/c[i];
		t %= c[i];
	}

	for(int i=0; i<7; i++) {
		printf("%-5d> %d\n", c[7-i-1], d[7-i-1]);
	}
}
