#include <stdio.h>

int a[10];

int main() {
	printf("Enter data: ");
	for(int i=0; i<10; i++)
		scanf("%d", &a[i]);

	printf("Enter a number to find: ");

	int x, ans = -1;
	scanf("%d", &x);
	for(int i=0; i<10; i++)
		if(a[i] == x) ans = i;

	ans == -1 ? printf("%d is not found\n", x) : printf("%d is the %dth number.\n", x, ans+1);
}
