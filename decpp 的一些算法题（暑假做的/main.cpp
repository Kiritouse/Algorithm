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
			//�������Ƶ���һ���߾��ȼӷ�
			char arr[11] ,brr[11] , temp[11] ;
			
			scanf("%s %s",&arr,&brr);
			 int lena = strlen(arr);
			 int  lenb = strlen(brr);
			 int lenmax = max(lena,lenb); 
			 int tempsum,flag=0,count  = 0;
			 int a = 0;
			 	for(int i = 0;i<lena;i++){
			 	temp[i] = arr[i];//�Ƚ�arr�������ֵȫ����ֵ��temp
			    }                
		
 
				for(int i = 0;i<lena;i++) 
				{					 		
					 arr[i] = temp[lena-1-i];
							
					//������������������н���λ�� 				
				}
					 if(lena<lenb){
			 for(int i =0;i<lenb-lena;i++){
			 	arr[lena+i] ='0'; 
			   } 
			 }
				//����λ�ú��ں��油0	
					for(int i = 0;i<lenmax;i++){
					printf("%c",arr[i]);
				}
				printf("\n"); 		


			    for(int i =0;i<lenb;i++)
				{
			 	temp[i] = brr[i];//�Ƚ�brr�������ֵȫ����ֵ��temp
			} 
				for(int i = 0;i<lenb;i++){
				
				brr[i] = temp[lenb-1-i];//�����鵹��			
				}
				if(lena>lenb){
			 for(int i =0;i<lena-lenb;i++){
			 	brr[lenb+i] ='0'; //����λ�ú�0 
			 } 
		} 
				for(int i = 0;i<lenmax;i++){
					printf("%c",brr[i]);
				}
				printf("\n");
				memset(temp,0,siezeof(temp));
       
				//���ڿ�ʼд�ӷ�����
				 for(int i = 0;i<lenmax;i++){
				 	 tempsum = (arr[i]-'0')+(brr[i]- '0');
					  tempsum  = tempsum%10;
					  temp[lenmax-1-i] = tempsum+'0'; //λ����Ӳ�����λ�� 
				 }
				 lenmax = strlen(temp);
				 printf("%d\n",lenmax);
				 for(int i = 0;i<lenmax;i++){
				 	printf("%c",temp[i]);
				 } 
 
//��ʼд������� 
//�������1.000100202020������ǰ���0��������
//2. 000000ȫ��0�Ļ�ֻ���һ��0 
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
                 for(int i = a;i<lenmax;i++){//��������˺ܶ�� 
                 	printf("%c",temp[i]);
                 }
                }
             else if(flag == 1) printf("0"); 
                 */
				 printf("\n");
				  
				  
         
		//}
	}
}
