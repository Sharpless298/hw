#include <stdio.h>
#include "ReverseString.h"

void GetString(char *str) {
    for (int i = 0; i < 1025; i++) {
        str[i] = 0;
	} 
	scanf("%[^\n]", str);
}

void ReverseString(char **str) {
    int len = 0;
    char t[1025] = {};
    for (int i = 1024; i >= 0; i--) {
        if (str[i] != 0 && str[i] != ' ') {
            len = i;
            break;
		}
    }
    for (int i = len, j = 0; i >= 0; i--) {
		t[j++] = str[i];
    }
	for (int i = 0; i <=len; i++)
		str[i] = t[i];
}
