#include <stdio.h>
#include <string.h>
__int64 a[101][11][110] = {0};
__int64 pow(int x,int y){
	if(y==0){
		return 1;
	}
	else {
		int temp = x;
		for(int i = 0;i<y-1;i++){
			x*=temp;
		}
		return x;
	}
}
int main(){
    int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d %d",&n,&m);
		memset(a,0,sizeof(a));
		a[1][1][1] = 1;
		for(int i = 2;i<=n;i++){//a[i][j][k]共i块积木，排成j列，第一列为k块积木
			for(int j = 1;j<=m;j++){//排成m列
				for(int k = 1;k<=i;k++){
					if(i==k&&j==1){
						a[i][j][k] = 1;//如果说第一列的积木总数为全体积木总数，且j==1
						//即只有一列的时候，情况只有一种
						//递推
					}
					else{
						for(int u = k-1;u>=1;u--){
							a[i][j][k] +=a[i-k][j-1][u];//递归
						    
						    
						    //我们要求i块积木，排成j列，第一列为k块积木的情况数，我们就需要知道减去第一列积木，得到上一种情况数
						    //换句话说对于数字36，如果我们排列好了，那么记为(36),如果说，在第一列加上9，那么就知道了（45）
						    //对于某种情况，对于（37）加上8同样也知道了(45)
						    //因此对于（45），我们就去找（44），（43）...(36),将这几种加起来就得到了（45）
						    //然后一切的开头就只有,1,1,1和i,j,i两种情况都是1
						    
						}
					}
				}
			}
		}
		int cnt = 0;
		for(int i = 1;i<=n;i++){
			cnt+= a[n][m][i];//n块积木，排成m列的情况总数为，第一列分别为1,2,3....n块积木的情况总数之和
		}
		cnt*=pow(2,m-1)-2;
		printf("%d\n",cnt);
	}	
}
