#include <stdio.h>
#include <string.h>

int main() {
	char c[100][100];
	for(int i=0; i<100; i++)
		scanf("%s", c[i]);
	
	int a[8] = {10000000, 2000000, 200000, 40000, 10000, 4000, 1000, 200};
	int cnt[8];
	memset(cnt, 0, sizeof(cnt));
	
	int vis[100];
	memset(vis, 0, sizeof(vis));

	for(int i=0; i<2; i++) {
		for(int j=5; j<100; j++) {
			int ok = 1;
			for(int k=0; k<8; k++) {
				if(c[0][k] != c[j][k+2]) ok = 0;
			}

			if(ok) printf("%s%9d\n", c[j], a[i]);
		}
	}
}
