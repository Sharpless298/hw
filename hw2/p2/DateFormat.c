#include "DateFormat.h"
int CheckDate(int year, int month, int day) {
	if (year < 0) return 0;
	if (month < 1 || month > 12) return 0;
	if (day < 1 || day > 31) return 0;
}

int CheckRegionType(char type[]) {
	if (type[0] == 'T' && type[1] == 'W') return 1;
	if (type[0] == 'U' && type[1] == 'S') return 1;
	if (type[0] == 'U' && type[1] == 'K') return 1;
	return 0;
}

int DateFormat(int year, int month, int day, char type[]) {
	if (type[0] == 'T' && type[1] == 'W') {
		printf("The date ");
		printf("%d年%d月%d日");
		printf(" is in [TW] format");
	}
	if (type[0] == 'U' && type[1] == 'S') {
		printf("The date ");
		printf("%d年%d月%d日");
		printf(" is in [TW] format");
	}
}

