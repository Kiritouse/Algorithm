#include<stdio.h>
int main(){
	int n;
	int arr[100] = {0};
	scanf("%d",&n);
	int i = 0;
	do{
		arr[i++] = n%2;
		n/=2;
		printf("i = %d\n",i);
	}while(n!=0);
	printf ("i = %d\n",i);
	for(i;i>=0;i--){
		printf("%d",arr[i]);
	}
}
