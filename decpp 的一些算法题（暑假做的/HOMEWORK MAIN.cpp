#include <stdio.h>
#include <math.h>
#include <string.h>
int a[501];//����a�洢ѧ�� 
int b [501];//����b�洢���� 
int score(int x){//������ת��Ϊ����
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
	while(scanf("%d %d %d",&timuhao,&a[k],&rank)){//�ɹ���whileѭ�����������и������� 
		b[k] = rank; 
		k++;
		
		
		
	}
	for(int i =0;i<11;i++){
		printf("����a[%d]��ֵΪ%d",i,a[i]);
	}
} 
