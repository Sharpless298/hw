#include <stdio.h>

int a[3][3];

int main() {
	printf("Enter data: \n");
	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++)
			scanf("%d", &a[i][j]);

	long long ans = 0;
	for(int i=0; i<3; i++) 
		ans += a[0][i]*a[1][(1+i)%3]*a[2][(2+i)%3];
	
	for(int i=0; i<3; i++) 
		ans -= a[0][2-i]*a[1][(1-i+3)%3]*a[2][(0-i+3)%3];

	printf("det(A) result: %lld\n", ans);
}
