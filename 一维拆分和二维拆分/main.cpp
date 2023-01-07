#include <stdio.h>
int a[100002];
int b[100002];
int b2[100002][100002];
void one(){
	int n,m;
		scanf("%d %d",&n,&m);
		for(int i = 1;i<=n;i++){
			scanf("%d",&a[i]);
			b[i] = a[i]-a[i-1];//构造拆分数列
			//原先不是前缀和数组，只是看成前缀和
		}
		for(int i = 0;i<m;i++){
			int l,r,c;
			scanf("%d %d %d",&l,&r,&c);
			b[l]+=c;
			b[r+1]-=c;
		}
		for(int i = 1;i<=n;i++){
			a[i] = b[i]+a[i-1];//重新前缀和
			//所谓差分就是先差开进行运算，然后再前缀和变回来
			printf("%d ",a[i]);
		}	
}
void insert(int x1,int y1,int x2,int y2,int c){
	b2[x1][y1]+=c;//二维拆分是从左上角往右下角的方向去看
	//二维前缀和是从右下角向左上角看
	//因此不难看出开头是x1,y1，而二维前缀和是x2,y2
	//末尾是x2+1,y2+1,二维前缀和是x1-1,y1-1
	
	b2[x2+1][y1]-=c;
	b2[x1][y2+1]-=c;
	b2[x2+1][y2+1]+=c;
	//
}
void two(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
} 
int main(){
	
	
	
}
