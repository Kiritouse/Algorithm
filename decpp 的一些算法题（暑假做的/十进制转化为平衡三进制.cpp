#include <stdio.h>
#include <string.h>
int main(){
	int k;
	scanf("%d",&k);
	while(k--){
	    int tempsave = 0;
	    int inputnum ,i  = 0,j=0;
	    scanf("%d",&inputnum);
	    char str[11] = {0}; 
	    while(1){
	    	tempsave = inputnum%3;
	    	inputnum/=3;
	    	str[i] = tempsave +'0';
	    	i++;//倒置转化为正常三进制 
	    }
	     int len  = strlen(str); 
	    while(1)//暂时不知道什么时候推出循环
		{
			if(str[j]=='2'){
				str[j]='-';
				str[j+1]++;//如果说为2的话就前面+1 
			}
			if(str[j] = '3'){//如果为3的话就要使得自己变为0，
			//同时往下一位插入一位1，且保持后面的字符串保持不变
			str[j] = '0';
			 
			} 
		} 
	}
} 
