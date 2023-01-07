#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int arr[100001];
int cmp_int(const void* e1, const void* e2) {
	return *(int*)e1 - *(int*)e2;
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
		qsort(arr, n, sizeof(int), cmp_int);
		int arrmin = 0, arrmax = 0;
		for (int i = 1, j = n - 2; i < n && j >= 0; i++, j--) {
			if (arr[i] == arr[0])arrmin++;
			if (arr[j] == arr[n - 1])arrmax++;
			}
		long long cnt = arrmin*arrmax*2;
		if(arr[0]==arr[n-1]) cnt = n*(n-1);
		printf("%lld\n",cnt);
	}
}
