#include <stdio.h>

int a[10];

int main() {
	for(int i=0; i<10; i++)
		scanf("%d", a+i);
	printf("original array:");
	for(int i=0; i<10; i++)
		printf(" %d", a[i]);
	printf("\n");

	printf("reversed array:");
	for(int i=0; i<10; i++)
		printf(" %d", a[10-i-1]);
	printf("\n");
}
