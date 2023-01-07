#include<stdio.h>
int main()
{
	int dp[40][40]={0},i,j,n;
	dp[0][0] = 1;//第一行是0，为
	//第二行下标为1,c1,0   c1,1//
	//dp[1]是第二行，但是c1,0  c1,1
	for(i=1;i<=33;i++)//杨辉三角 
	{
	   dp[i][0]=1;
		dp[i][i]=1;
		for(j=1;j<=i;j++)
		{
			dp[i][j]=dp[i-1][j]+dp[i-1][j-1]; 
		}
	}
	while(scanf("%d",&n)&&n>=0)
	{
		//输入为n实际上第n+1行,下标为n，说明是
		printf("2^%d=1",n);//为了输出后面的+号就先输出1
		for(j=1;j<=n;j++)
		{
			printf("+%d",dp[n][j]); //跳过第一个数进行输出
		}
	 printf("\n");
	}
	return 0;	
} 
