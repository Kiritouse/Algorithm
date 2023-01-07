#include <stdio.h>
#include <math.h>
void swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}
void quick_sort(int q[], int l, int r) {
	if (l >= r) return;
	int i = l - 1, j = r + 1, x = q[(l + r) / 2];
	while (i < j) {
		do i++;
		while (q[i] > x);
		do j--;
		while (q[j] < x);
		if (i < j) swap(q[i], q[j]);
	}
	quick_sort(q, l, j);
	quick_sort(q, j + 1, r);
}
bool check(int num) {
	int res = sqrt(num);
	if ((num - res * res) == 0)return true; //是完全平方数
	else return false;
}
int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++)scanf("%d", &arr[i]);
	quick_sort(arr, 0, n - 1);
//	for (int i = 0; i < n; i++) printf("%d ", arr[i]);
	for (int i = 0; i < n; i++) {
		if (!check(arr[i])) {
			printf("%d\n", arr[i]);
			break;
		}


	}

}
