 #include <stdio.h>
__int64 c[101][101] = {0};//������Ǵ�� 
int main(){
	c[0][0] = 1; 
	for(int i =1;i<66;i++){
		c[i][0]=  c[i][i] = 1;//��ͷ��ĩβ��Ϊ1
		for(int j = 1;j<i;j++){
		 c[i][j] = c[i-1][j]+c[i-1][j-1]; 
		} 
	}
	//��ȡ����������ı�� 
	int n;
	for(int i =0;i<10;i++){
		for(int j = 0;j<i;j++){
			printf("%d\n",c[i][j]);
		}
	} 
	while(scanf("%d",&n)!=EOF){
		__int64 count = 0;
		if(n==1){
			printf("1\n");
			continue; 
		} 
			//��Ϊ��ͷ��λ����Ϊ1����Ч��
			//����ֻ��Ҫ����n-1λ����1�ĸ�������0������ 
			if((n-1)%2==0){//���ż�ֿ����� 
				for(int i = (n-1)/2;i<=n-1;i++){
					count+=c[n-1][i];
				} 
			}
			else{
				for(int i = n/2;i<=n-1;i++){
					count+=c[n-1][i]; 
				}
				
			}
			printf("%I64d\n",count); 
			
		
		
		 
	}
}
