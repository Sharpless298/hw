#include "GetStringLength.h"
#include <stdio.h>

int GetStringLength(char src[]) {
	int cnt = 0;
	for (int i = 0; src[i] != '\0' && i < 2048; i++)
		if (('a' <= src[i] && src[i] <= 'z') || ('A' <= src[i] && src[i] <= 'Z')) cnt++;
	return cnt;
}
