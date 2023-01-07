#include <stdio.h>
#include <string.h>
__int64 arr[50];
int k =0;
void to_binary(__int64 n){
	
	if(n==0) return;
	arr[k++] = n%3;
	to_binary(n/3);
	 
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		k = 0;
		memset(arr,0,sizeof(arr));
		int n;
		scanf("%d",&n);
		to_binary(n);
		 
	}
}
