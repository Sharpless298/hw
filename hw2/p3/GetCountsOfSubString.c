#include "GetCountsOfSubString.h"

int GetCountsOfSubString(char s[], char c[]) {
	int id_c = 129;
	for (int i = 0; i < 129; i++) {
		if (c[i] == '\0') {
			id_c = i+1;
			break;
		}
	}

	int cnt = 0;
	for (int i = 0; i < 4096; i++) {
		int f = 1;
		for (int j = 0; j < id_c; j++) {
			if (s[i+j] != c[j]) {
				f = 0;
				break;
			}
		}

		cnt += f;
	}

	return cnt;
}

