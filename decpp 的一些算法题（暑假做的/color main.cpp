#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int arr[101][101] = {1};//ȫ��Ϳ�ɺ�ɫ 
		int m,n,k,x,y,count = 0,flag ;
		scanf("%d %d %d",&m,&n,&k);
		while(k--){
			scanf("%d %d",&x,&y);
			arr[x][y] = {0};//�����ɫ���겢�ҽ��б�� 
		}//˼·�����Ⱥ�����������������
		//���˵��һ�л�����һ��û�к�ɫ ���Ǿ�ֱ�ӽ���һ�л����ж���Ϊ1
		//����еĻ�����һ�л����ж���ֵΪ0 
		for(int i = 0;i<m;i++){//������� 
		flag = 0;
			for(int j = 0;j<n;j++){
			  if(arr[i][j]==0){
			  	flag =1; //flag = 1������һ���к�ɫ ������ѭ���������޺�ɫ 
			  }
		   }
		    
			  if(flag){//����к�ɫ����һ�����еĸ�ֵΪ0 
			  	for(int j = 0;j<n;j++){
			  	arr[i][j] = {0};
			   }
			} 	
			
			
		} 
		for(int j = 0;j<n;j++){//������� 
		flag = 0; 
			for(int i = 0;i<m;i++){
				if(arr[i][j]==0){
					flag = 1;//��һ���к�ɫ 
				}
			}
		     
			if(flag==0){//ֻҪ��һ��û�к�ɫ��ȫ����ֵΪ1��ͿΪ��ɫ 
				arr[i][j] = {1};
			}
			if(arr[i][j])
			count++; 
		  }
			
		} 
	}
} 
