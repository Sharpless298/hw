#include <stdio.h>

int a[3][3];

int main() {
	printf("Enter data:\n");
	int cnt = 0;
	for(int i=0; i<9; i++) {
		int x;
		scanf("%d", &x);
		if(x == 0) cnt++;
	}

	cnt>4 ? printf("It is a sparse matrix!\n") : printf("It is not a sparse matrix!\n");
}
