#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		double n,m;
		scanf("%lf %lf",&n,&m);
		double averge = (n+m)/2;
		if(n<m){
			printf("Alice %g\n",averge-n);
		}
		else if(n>m)
		printf("Bob %g\n",averge-m);
		else 
		printf("None\n");
	}
} 
