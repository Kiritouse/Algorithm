#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf("%d",&t);
	//������Ǵ����
		int f[40][40]  ={0};
		f[0][0] = 1;
		for(int i  = 1;i<=33;i++){
			f[i][0] = 1;
			f[i][i] = 1;
			for(int j = 1;j<=33;j++){
				f[i][j] = f[i-1][j] +f[i-1][j-1];
			}
		}

	//�����Ӵ�����ı���һ���±����Ϊ1�Ļ���ʵ�����ǵڶ��У�����ʵ����ȷʵc(1,0)  c(1,1)
	//��c(n,m)ֱ�Ӵ����±������
	
	while(t--){
		int n ,m;
		scanf("%d %d",&n,&m);
		int cnt = 0;
		int a = (n+m)/2;
		//printf("a��ֵΪ%d\n",a);
		float b = (n+m)/2.0;//����ǧ��Ҫ����2�������Ļ��ͻ��Զ��ȱ�Ϊint��Ȼ���ٸ�ֵ����float
		//Ҫ��float�������㣬�漰��int����ʱ�򣬼ǵü���С������,��Ȼ���Զ�����ת��
			//printf("b��ֵΪ%f\n",b);
		if((float(a)-b)!=0){//(n+m)/2���������Ļ���
		printf("%d\n",cnt);
		}
		else{
			cnt = f[n][a];
			printf("%d\n",cnt);
		}
		
		
	}
}
