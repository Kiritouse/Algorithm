#include <stdio.h>
#include <string.h>
 
__int64 pow(__int64 x,__int64 y){
	if(y==1){
		return 1;
	}
	else{
		__int64 temp = x;
		for(__int64 i = 0;i<y-1;i++){
			x*=temp;
		}
	}
}
int str_to_num(char c1){
	
}

int main(){
	int n;
	char c[32];
	while(scanf("%s %d",&c,&n)){
		int flag  = 0,jinzhi; 
	      int max = 0; 
	    int len = strlen(c); 
	    int sum = 0;
	    int num =0;
	    int i;
		for( i =0;i<len;i++){
			//找到最大的字符串确定进制
			if(c[i]>max){
				max = c[i];//找到了最大进制, 
			} 
		 
		}
		if(max>=65&& max<=70 ){//如果最大的在A和F之间
		 jinzhi  = max-54; 
		}
		else{}//确定了进制数
			jinzhi = max-'0'+1;
		}
		for(int i = 0;i<len;i++){
			if(jinzhi<=10){//十进制以下就不用调用函数 
				sum+=(c[i]-'0')*pow(jinzhi,len-1-i); 
			}
			else{
				if(!(c[i]>='A'&&c[i]<='Z'){
					sum+=(c[i]-'0')*pow(jinzhi,len-1-i);
					//如果不是字符A，F那么就正常算 
				}
				else{
				  sum+=(str_to_num(c[i]))*pow(jinzhi,len-1-i);	
				} 
			}
		}
		printf("%d\n",sum);
	 }
	 

