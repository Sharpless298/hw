#include <stdio.h>
#include <stdlib.h>

void swap(long long int *a, long long int *b) {
	*a = *a^*b;
	*b = *a^*b;
	*a = *b^*a;
}

int main() {
	printf("Please input a triangle's 3 sides(a,b,c): ");
	long long int a, b, c;
	scanf("%lld,%lld,%lld,", &a, &b, &c);
	if(a > b) swap(&a, &b);
	if(b > c) swap(&b, &c);
	if(a > b) swap(&a, &b);
	
	if(a+b <= c) 
		printf("Not a Triangle\n");
	else {
		if(a*a + b*b == c*c) printf("Right Triangle!\n");
		else if(a*a + b*b > c*c) printf("Acute Triangle!\n");
		else printf("Obtuse Triangle!\n");
	}
}
