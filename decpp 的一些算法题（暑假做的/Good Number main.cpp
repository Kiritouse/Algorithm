 #include <stdio.h>
__int64 c[101][101] = {0};//杨辉三角打表 
int main(){
	c[0][0] = 1; 
	for(int i =1;i<66;i++){
		c[i][0]=  c[i][i] = 1;//开头和末尾都为1
		for(int j = 1;j<i;j++){
		 c[i][j] = c[i-1][j]+c[i-1][j-1]; 
		} 
	}
	//获取所有组合数的表格 
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
			//因为开头首位必须为1才有效果
			//所以只需要后面n-1位数字1的个数多于0就行了 
			if((n-1)%2==0){//奇和偶分开讨论 
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
