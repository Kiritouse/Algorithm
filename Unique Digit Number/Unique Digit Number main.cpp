#include <stdio.h>
#include <math.h>
__int64 num[8877711];
int flag = 1;//判断满足题意的某个数的序号
int ischeck[10] = {0};//检查某一个
void dfs(int n,int m,__int64 int ans){
	if(n==m-1){//因为调用时候是m+1，在上一次调用时m已经指向了n，然后这次调用是m+1,所以要判断是否指向最后一位，就应该看n是否为m-1
		num[flag] = ans;
		flag++;
		return;
	}
	for(int i = 0;i<=9;i++){//某一位有多少种数字
		if(n!=1&&m==1&&i==0){
			continue;//如果说该数不为一位数，一个指针m指向第一个数字,被m指向的数字为0
			//那么就退出寻找0，在该位数寻找数字1，因为开头为0是没有意义的
		}
		if(ischeck[i]==0){//如果说数字i没有搜索过
			ischeck[i] = 1;//那么此时开始搜索，开始对1进行搜索
			dfs(n,m+1,ans*10+i);//再次调用该函数,将该数的指针指向下一位,然后数字就
			ischeck[i]=0;//递归调用完后重置所有数据	
		}		
	}
	//这个算法并不是让你一一进行比对，而是有一定顺序不会重复也不会漏数字去构造出复合题意的数据
}
int main(){
		int n;
		for(int i =1;i<=10;i++){
			dfs(i,1,0);//从第1位数开始进行DFS搜索
			
		}
		while(scanf("%d",&n)!=EOF){
			printf("%I64d\n",num[n]);
		}
	
}
