#include <stdio.h>
long long gcd(long long x, long long y) {
	return y ? gcd(y, x % y) : x;
}
int main() {
	int k;
	scanf("%d", &k);
	while (k--) {
		int n;
		scanf("%d", &n);
		int a[11], b[11];
		long long tempsavedata = 1;
		long long fenzi = 0, fenmu = 1;
		long long GCD;
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < n; i++) {
			scanf("%d", &b[i]);
		}
		for (int i = n - 1; i >= 0; i--) {

			fenmu = a[i] * fenmu + fenzi;
			fenzi = b[i] * tempsavedata;
			tempsavedata = fenmu;
		}
		if (fenzi % fenmu == 0) {
			printf("%I64d\n", fenzi / fenmu);
		}
		else {
			GCD = gcd(fenzi, fenmu);
			fenzi /= GCD;
			fenmu /= GCD;
			printf("%I64d/%I64d\n", fenzi, fenmu);
		}


	}
}
