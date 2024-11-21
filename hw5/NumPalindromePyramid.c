#include <stdio.h>

int main() {
	printf("Please input the number of the layer of the pyramid: ");
	int n;
	scanf("%d", &n);
	if((n&1)==0 || n<0) {
		printf("Input error!\n");
		return 0;
	}
	n = n/2 +1;
	for(int i=0; i<n; i++) {
		printf("|");
		for(int j=0; j<n-1-i; j++) printf(" ");
		for(int j=0; j<i+1; j++) printf("%d", j+1);
		for(int j=i; j>0; j--) printf("%d", j);
		for(int j=0; j<n-1-i; j++) printf(" ");
		printf("|\n");
	}
}
