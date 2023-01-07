#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf("%d",&t);
	//杨辉三角打个表
		int f[40][40]  ={0};
		f[0][0] = 1;
		for(int i  = 1;i<=33;i++){
			f[i][0] = 1;
			f[i][i] = 1;
			for(int j = 1;j<=33;j++){
				f[i][j] = f[i-1][j] +f[i-1][j-1];
			}
		}

	//这样子打出来的表，第一个下标如果为1的话，实际上是第二行，但是实际上确实c(1,0)  c(1,1)
	//求c(n,m)直接带入下标就行了
	
	while(t--){
		int n ,m;
		scanf("%d %d",&n,&m);
		int cnt = 0;
		int a = (n+m)/2;
		//printf("a的值为%d\n",a);
		float b = (n+m)/2.0;//这里千万不要除以2，这样的话就会自动先变为int，然后再赋值给了float
		//要在float进行运算，涉及到int数的时候，记得加上小数部分,不然有自动类型转换
			//printf("b的值为%f\n",b);
		if((float(a)-b)!=0){//(n+m)/2不是整数的话，
		printf("%d\n",cnt);
		}
		else{
			cnt = f[n][a];
			printf("%d\n",cnt);
		}
		
		
	}
}
