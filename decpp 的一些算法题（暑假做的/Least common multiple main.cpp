#include<stdio.h>

long long arr[100]; 
long long gcd(long long x,long long y){
	return y?gcd(y,x%y):x;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n,sum = 1;
		 long long temp;
		scanf("%I64d",&n);
	for(int i = 0;i<n;i++){
		scanf("%I64d",&arr[i]);
	}	
		//ÏÈ±©Á¦ÊÔÊÔ
		 sum = arr[0]*arr[1]*arr[2];
		for(int i =0;i<n-2;i++){
			for(int j = i+1;j<n-1;j++){
				for(int k = j+1;k<n;k++){
					temp = arr[i]*arr[j]/gcd(arr[i],arr[j]);
					if(temp*arr[k]/gcd(temp,arr[k])<sum){
					sum = temp*arr[k]/gcd(temp,arr[k]);
				}
				}
			}
		}
		
		printf("%I64d\n",sum); 
     
	
  }
}
