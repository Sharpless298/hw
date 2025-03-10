#include "IsPalindrome.h"

int IsPalindrome(char s[]) {
	char t[256];
	int n = 0;
	for (int i = 0; i < 256; i++) {
		if (('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z')) {
			t[n++] = s[i] | (1 << 5);
		}
	}

	for (int i = 0; i < n; i++) {
		if (t[i] != t[n - i - 1]) return 0;
	}
	return 1;
}

