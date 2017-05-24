#include <stdio.h>

int main() {
	int n,i,l, w, h;
	while(scanf("%d", &n) == 1 && n) {
		int mx = 0, ans = 0;
		for(i = 0;i < n ;i++) {

			scanf("%d%d%d", &l, &w, &h);
			if(h > mx || (h == mx && ans < l*w*h)) {
				mx = h;
				ans = l*w*h;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
