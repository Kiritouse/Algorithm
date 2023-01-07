#include <stdio.h>
#include <math.h>
#include <string.h>
int a[501];//数组a存储学号 
int b [501];//数组b存储排名 
int score(int x){//将排名转化为分数
     if(x>=1&&x<=12){
     	return 32;
     }
	 else if(x>=13&&x<=24){
	 	return 16;
	 }
	 else if(x>=25&&x<=48){
	 	return 8
	 }
	 else if(x>=49&&x<=96){
	 	return 4
	 }
	 else if(x>=97&&x<=192){
	 	return 2;
	 }
	 else {
	 	return 1;
	 } 


}
 
int main(){
	int timuhao,rank,k=0;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(a));
	while(scanf("%d %d %d",&timuhao,&a[k],&rank)){//成功在while循环里往数组中给输数据 
		b[k] = rank; 
		k++;
		
		
		
	}
	for(int i =0;i<11;i++){
		printf("数组a[%d]的值为%d",i,a[i]);
	}
} 
