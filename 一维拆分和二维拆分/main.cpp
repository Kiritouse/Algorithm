#include <stdio.h>
int a[100002];
int b[100002];
int b2[100002][100002];
void one(){
	int n,m;
		scanf("%d %d",&n,&m);
		for(int i = 1;i<=n;i++){
			scanf("%d",&a[i]);
			b[i] = a[i]-a[i-1];//����������
			//ԭ�Ȳ���ǰ׺�����飬ֻ�ǿ���ǰ׺��
		}
		for(int i = 0;i<m;i++){
			int l,r,c;
			scanf("%d %d %d",&l,&r,&c);
			b[l]+=c;
			b[r+1]-=c;
		}
		for(int i = 1;i<=n;i++){
			a[i] = b[i]+a[i-1];//����ǰ׺��
			//��ν��־����Ȳ�������㣬Ȼ����ǰ׺�ͱ����
			printf("%d ",a[i]);
		}	
}
void insert(int x1,int y1,int x2,int y2,int c){
	b2[x1][y1]+=c;//��ά����Ǵ����Ͻ������½ǵķ���ȥ��
	//��άǰ׺���Ǵ����½������Ͻǿ�
	//��˲��ѿ�����ͷ��x1,y1������άǰ׺����x2,y2
	//ĩβ��x2+1,y2+1,��άǰ׺����x1-1,y1-1
	
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
