#include <stdio.h>
int arr[2000002] = {0};
int brr[2000002] = {0}; 
//这道题核心就是前缀和      
int main(){
	int n = 0;
	int flag = 4;

	for(int i = 0;i<3;i++){
		brr[i] = 0;//数组下标5前面的都是0
		 //而下标5及其以后就开始出现内部素数了 
	}
 
	arr[0] = 1;
	arr[1] = 1;
	brr[4]=1;
	for(int i =2;i<2000002;i++){
		if(!arr[i]){
			for(int j = 2*i;j<2000002;j+=i){
				arr[j] =1;
			}
		}
	}//打表完成

	int j  = 0;//定义两个指针i和j来用来寻找素数 
    for(int i =5;i<2000002;i++){
        if(brr[i]==0){
    	brr[i] =brr[i-1];
		}//将上一个数据传入下一个 
        
    	if(arr[i]==0){//指针i找到素数 
    		//将指针j挪到i后面
			for(j = i+1;j<2000002;j++){
				//指针j开始向后面移动直到找到另一个素数
				if(arr[j]==0){
					break;//跳出此次循环，同时记录下此时j的位置 
				} 
			}
			n = (i+j)/2;
			if(arr[n]!=0&&n!=4){//如果arr[n]是非素数， 
				brr[n] = brr[flag]+1;
				
			//4，9，如果找到了9，如果记录上一次找到的数据呢？ 
			}
			else {//如果找到了两个连续的素数，但是n是素数
				brr[n] = brr[flag];
			//所以还是不变 
			}
			flag = n;//flag记录上一组内部素数 
			 
			//比较两个指针的值
			//不需要判断剩下的素数是不是奇数 	 
    	}
    }

	
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,count;
		scanf("%d %d",&a,&b);
		count = brr[b]-brr[a-1];
		printf("%d\n",count);
	}
  
}
