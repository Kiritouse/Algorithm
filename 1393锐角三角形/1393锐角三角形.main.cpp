#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int cmp(const void*pa,const void*pb){//��ָ��
	return (*(int*)pa-*(int*)pb);//ǿ������ת��Ϊint���͵�ָ��
	//Ȼ��*ȡֵ
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
	  //ע������sizeof(arr[0]),���ּ�д����arr,������ȡ���ǵ�ַ��
	  //��С���������ֵĴ�С��
	  qsort(arr,n,sizeof(arr[0]),cmp);
	  //һ��Ҫ����
	  //����ô��ڻ�����˼��ȥ����
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
