#include <stdio.h>
#include <stdlib.h>
int arr[8] = {0};
int isSelect[8] = {0};//0����ȫ��û�б�ȡ�ù�
void dfs(int k,int n){//k�ǵڼ��㣬n���ܹ��м���
     if(k>n){//���˵�����������,��ô�����
	 	for(int i = 1;i<=n;i++) printf("%d",arr[i]);
	 	printf("\n");
	 }
	 for(int i = 1;i<=n;i++){//�ڵ�һ����λ������1-n������
	   if(!isSelect[i]){//�������iû�б�ѡ��//���������
	   	arr[k] = i;
	   	isSelect[i] = 1;//����i�������
	   	dfs(k+1,n);//������һ��
	   	//������һ���˳���
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
