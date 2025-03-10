#include "GetCountsOfSubString.h"

int GetCountsOfSubString(char s[], char c[]) {
	int n = 129;
	for (int i = 0; i < 129; i++) {
		if (c[i] == '\0') {
			n = i+1;
			break;
		}
	}

	int cnt = 0;
	for (int i = 0; i < 4096-n; i++) {
		int f = 1;
		for (int j = 0; j < n; j++) {
			if (s[i+j] != c[j]) {
				f = 0;
				break;
			}
		}

		cnt += f;
	}

	return cnt;
}

