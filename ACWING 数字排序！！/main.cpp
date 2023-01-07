#include <stdio.h>
#include <stdlib.h>
int arr[8] = {0};
int isSelect[8] = {0};//0代表全都没有被取得过
void dfs(int k,int n){//k是第几层，n是总共有几层
     if(k>n){//如果说数字填充完了,那么就输出
	 	for(int i = 1;i<=n;i++) printf("%d",arr[i]);
	 	printf("\n");
	 }
	 for(int i = 1;i<=n;i++){//在第一个空位上能填1-n个数字
	   if(!isSelect[i]){//如果数字i没有被选过//填入该数字
	   	arr[k] = i;
	   	isSelect[i] = 1;//数字i被填过了
	   	dfs(k+1,n);//进入下一层
	   	//若从上一层退出后
	   	isSelect[i] = 0;
	   	
	   	
	   }
	 	
	 }
	
}

int main() {
	int n;
	scanf("%d",&n);
	dfs(1,n);
	return 0;
}
