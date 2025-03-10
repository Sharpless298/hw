#include "GetCountsOfSubString.h"

int GetCountsOfSubString(char s[], char t[]) {
	int n = 128;
	for (int i = 0; i < 128; i++) {
		if (t[i] == '\0') {
			n = i;
			break;
		}
	}

	int cnt = 0;
	for (int i = 0; i < 4096; i++) {
		int f = 1;
		for (int j = 0; j < n; j++) {
			if (s[i + j] != t[j]) {
				f = 0;
				break;
			}
		}
		cnt += f;
	}
	return cnt;
}
