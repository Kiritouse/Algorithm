#include <stdio.h>
int arr[46] = {1,1};
__int64 count[100000000] = {0};//这道题，如果数组越界了的话，就会报runtime error
int main(){
	for(int i =2;i<45;i++){
		arr[i] = arr[i-1]+arr[i-2];
	}//斐波那契数列打表
	//还是打表，将所有斐波那契数列的前三个数存储在一个数列当中
	__int64 count1 = 0;
	for(int i = 1;i<44;i++){//这里如果不从1开始的话，j=i那里就又会多出来一个1，1 1 2 3 5
		for(int j = i;j<44;j++){
			for(int k = j;k<44;k++){//为了避免那种重复的情况，我们就注意初始值的选择，111 112 113...  121 122这样就不会出现重复
				count[count1] = arr[i]+arr[j] +arr[k];
				count1++;
			}
		}
	}
	
	
	
	int t;
	__int64  cnt;
	scanf("%d",&t);
	while(t--){
		cnt = 0;
       int  n;
	  scanf("%d",&n);
	  for(int i = 0;i<count1;i++){
		  if(n==count[i]){
	         cnt++;
		  }
	  }
	  printf("%I64d\n",cnt);
	  
	}
}
