#include <stdio.h>

int main() {
	printf("Please enter the first three characters of your ID number: ");
	char a, b, c;
	scanf("%c%c%c", &a, &b, &c);

	printf("The place of your household registration: ");
	switch(a) {
		case 'A':
			printf("Taipei City");
			break;
		case 'B':
			printf("Taichung City");
			break;
		case 'C':
			printf("Keelung City");
			break;
		case 'D':
			printf("Tainan City");
			break;
		case 'E':
			printf("Kaohsiung City");
			break;
		case 'F':
			printf("New Taipei City");
			break;
		case 'G':
			printf("Yilan County");
			break;
		case 'H':
			printf("Taoyuan City");
			break;
		case 'I':
			printf("Chiayi City");
			break;
		case 'J':
			printf("Hsinchu County");
			break;
		case 'K':
			printf("Miaoli County");
			break;
		case 'M':
			printf("Nantou County");
			break;
		case 'N':
			printf("Changhua County");
			break;
		case 'O':
			printf("Hsinchu City");
			break;
		case 'P':
			printf("Yunlin County");
			break;
		case 'Q':
			printf("Chiayi County");
			break;
		case 'T':
			printf("Pingtung County");
			break;
		case 'U':
			printf("Hualien County");
			break;
		case 'V':
			printf("Taitung County");
			break;
		case 'W':
			printf("Kinmen County");
			break;
		case 'X':
			printf("Penghu County");
			break;
		case 'Z':
			printf("Lienchiang County");
			break;
		default:
			printf("Input error!");
			break;
	}
	printf("\n");

	printf("Your gender: ");
	switch(b) {
		case '1':
			printf("Male");
			break;
		case '2':
			printf("Female");
			break;
		default:
			printf("Input error!");
			break;
	}
	printf("\n");

	printf("Your identity type: ");
	switch(c) {
		case '0' ... '5':
			printf("Taiwan-born national");
			break;
		case '6':
			printf("Naturalized former foreign national");
			break;
		case '7':
			printf("Former stateless national");
			break;
		case '8':
			printf("Naturalized from Hong Kong/Macau");
			break;
		case '9':
			printf("Naturalized from mainland China");
			break;
		default:
			printf("Input error!");
			break;
	}
	printf("\n");
}
