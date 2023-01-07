#include <stdio.h>
__int64 a[100000001] = {0};
__int64 b[1001][1001] = {0};
const int p = 1000000007;
void swap(int* x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
void quick_sort(int q[],int l,int r){
	int i = l-1;
	int j = r+1;
	int x = q[(l+r)/2];
	if(l>=r) return;
	while(l<r){
		do i++;while(q[i]>x);
		do j++;while(q[j]<x);
		if(l<r) swap(&q[i],&q[j]);
	}
	quick_sort(q,l,j);
	quick_sort(q,j+1,r);
	
}

int main(){
	a[2] = 1;
	a[3]  = 3;//长度为3代表有3个情况
	//开始递推！
	int j = 2;
	for(int i = 4;i<=1000000;i++){
		a[i] = ((a[i-1]+a[i-2])%p+ (2*j)%p)%p;
		j = (2*j)%p;
	}
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		printf("%I64d\n",a[n]);
	}
}
