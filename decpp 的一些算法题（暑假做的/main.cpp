#include <stdio.h>
#include <string.h> 
int max(int x,int y){
	if(x>y) return x;
	else return y;
}
int main(){
	int k;
	scanf("%d",&k);
	while(k--){
		/*int a, b;
		scanf("%d %d",&a,&b);
		int num = a+b;
		if(num<10){
			printf("num\n");
		}
		else{
			*/
			//这道题设计到了一个高精度加法
			char arr[11] ,brr[11] , temp[11] ;
			
			scanf("%s %s",&arr,&brr);
			 int lena = strlen(arr);
			 int  lenb = strlen(brr);
			 int lenmax = max(lena,lenb); 
			 int tempsum,flag=0,count  = 0;
			 int a = 0;
			 	for(int i = 0;i<lena;i++){
			 	temp[i] = arr[i];//先将arr中数组的值全部赋值给temp
			    }                
		
 
				for(int i = 0;i<lena;i++) 
				{					 		
					 arr[i] = temp[lena-1-i];
							
					//将输入的数据在数组中交换位置 				
				}
					 if(lena<lenb){
			 for(int i =0;i<lenb-lena;i++){
			 	arr[lena+i] ='0'; 
			   } 
			 }
				//交换位置后在后面补0	
					for(int i = 0;i<lenmax;i++){
					printf("%c",arr[i]);
				}
				printf("\n"); 		


			    for(int i =0;i<lenb;i++)
				{
			 	temp[i] = brr[i];//先将brr中数组的值全部赋值给temp
			} 
				for(int i = 0;i<lenb;i++){
				
				brr[i] = temp[lenb-1-i];//将数组倒置			
				}
				if(lena>lenb){
			 for(int i =0;i<lena-lenb;i++){
			 	brr[lenb+i] ='0'; //交换位置后补0 
			 } 
		} 
				for(int i = 0;i<lenmax;i++){
					printf("%c",brr[i]);
				}
				printf("\n");
				memset(temp,0,siezeof(temp));
       
				//现在开始写加法程序
				 for(int i = 0;i<lenmax;i++){
				 	 tempsum = (arr[i]-'0')+(brr[i]- '0');
					  tempsum  = tempsum%10;
					  temp[lenmax-1-i] = tempsum+'0'; //位数相加并调换位置 
				 }
				 lenmax = strlen(temp);
				 printf("%d\n",lenmax);
				 for(int i = 0;i<lenmax;i++){
				 	printf("%c",temp[i]);
				 } 
 
//开始写输出程序 
//需求分析1.000100202020，这种前面的0必须舍弃
//2. 000000全是0的话只输出一个0 
//02
               /*  for(a = 0;a<lenmax;a++){
                 	if(temp[a]!='0'){
                 		flag = 2;
                 		break;
                 	}
                 	else
                 	flag =1;
                 }
                 if(flag ==2){        
                 for(int i = a;i<lenmax;i++){//这个运行了很多次 
                 	printf("%c",temp[i]);
                 }
                }
             else if(flag == 1) printf("0"); 
                 */
				 printf("\n");
				  
				  
         
		//}
	}
}
