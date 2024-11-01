#include <stdio.h>
#include <math.h>

int main() {
	printf("Ticket type: ");
	char a;
	scanf("%c", &a);

	printf("Ticket quantity: ");
	int b;
	scanf("%d", &b);

	printf("Grade: ");
	int c;
	scanf("%d", &c);

	printf("Disabled: ");
	char d;
	scanf(" %c", &d);

	int price;
	switch(a) {
        case 'A': price = 12; break;
        case 'B': price = 13; break;
        case 'C': price = 15; break;
        case 'D': price = 20; break;
        case 'E': price = 18; break;
        case 'F': price = 16; break;
        default:
            printf("ERROR!\n");
            return 0;
    }

	if(b<1 || b>30 || c<1 || c>4 || (d!='Y' && d!='N')) {
		printf("ERROR!\n");
		return 0;
	}
	double k = 1.0;
	if(d == 'Y') k = 0.5;
	else if(b == 30) k = 0.75;
	else if(b >= 10) k = 0.9;
	else if(c == 1) k = 0.95;

	printf("You need to pay $%d for the ticket(s) you selected.\n", (int)ceil(price*b*k));
}
