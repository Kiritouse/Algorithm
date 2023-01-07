#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, k;
		scanf("%d %d", &n, &k);
		int step = 0;
		while (n >= k) {
			if (n % 10 == 0) {
				step++;
				while (n % 10 == 0) {
					n /= 10;
				}
			} else {
				n -= k;
				step++;
			}
		}
		printf("%d %d\n", step, n);
	}
}
