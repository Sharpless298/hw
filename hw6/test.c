#include <stdio.h>

int main() {
	char a[5][10];
	char b[100][12];
	for(int i=0; i<5; i++)
		scanf("%s", a[i]);
	for(int i=0; i<100; i++) 
		scanf("%s", b[i]);
	
	for(int i=0; i<5; i++)
		printf("%s", a[i]);
	for(int j=0; j<100; j++)
		printf("%s", b[j]);
}
