#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int cmp(const void*pa,const void*pb){//空指针
	return (*(int*)pa-*(int*)pb);//强制类型转换为int类型的指针
	//然后*取值
}
bool issan(int a,int b,int c){
	if((a+b)>c&&(c-a)<c){
		return true;
	}
	else return false;
	
}
bool isruijiao(int a,int b,int c){
	if(a*a+b*b>c*c){
		return true;
	}
	else{
		return false;
	}
}
int vis[102];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		
		int n,arr[102] = {0};
		scanf("%d",&n);
	  for(int i = 0;i<n;i++){
	  	scanf("%d",&arr[i]);
	  }
	  //注意这里sizeof(arr[0]),别手贱写成了arr,这样获取的是地址的
	  //大小而不是数字的大小了
	  qsort(arr,n,sizeof(arr[0]),cmp);
	  //一定要排序
	  //这次用窗口滑动的思想去做题
	  int cnt = 0;
	  for(int i  =  0;i<n-2;i++){
	  	for(int j  = i+1;j<n-1;j++){
		  	for(int k = j+1;k<n;k++){
			  	if(issan(arr[i],arr[j],arr[k])){
				  	if(isruijiao(arr[i],arr[j],arr[k])){
					  	cnt++;
					  }
				  }
			  }
		  }
	  }
	  printf("%d\n",cnt);
	  
	  
	}
}
