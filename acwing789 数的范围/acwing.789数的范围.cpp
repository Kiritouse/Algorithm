#include <stdio.h>
int arr[100001];
int  judgerel(int k,int n){
    int l = -1,r =n;
    while(l+1!=r){
		int m = (l+r)/2;
		if (arr[m]<=k){
			l = m;			
		}
		else r = m;
    }
		return l;
}
int judgerer(int k,int n){
	int l = -1,r=n;
	while(l+1!=r){
		int m = (l+r)/2;
		if(arr[m]<k){
			l = m;
		}
		else r = m;
	}
	return r;
}

int main(){
	int n;
	int q;
	scanf("%d %d",&n,&q);

	for(int i =0;i<n;i++){
       scanf("%d",&arr[i]);
	}
	int k;
	for(int i = 0;i<q;i++){
		scanf("%d",&k);
        int ansmax = judgerel(k,n);//������ָ���һ�������һ��
        int ansmin = judgerer(k,n);//������ָ���һ���ǵ�һ��������
        if(ansmin>ansmax){
        	printf("-1 -1\n");
			
		}
		else 
        printf("%d %d\n",ansmin,ansmax);
        //���������ָ�룺����Ϊ 122 334
        //���������ָ�� ����Ϊ12233 4,
        
	}
}
