#include <stdio.h>
#include<math.h>
int main(int argc, char** argv) {
	int t;
	scanf("%d",&t);
	while(t--){
		int x1, y1 ,r1;
		int x2,y2,r2;
		scanf("%d %d %d",&x1,&y1,&r1);
		scanf("%d %d %d",&x2,&y2,&r2);
		int d2 = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2) ;
		int R1 = (r2-r1)*(r2-r1);
		int R2 = (r2+r1)*(r2+r1);
		if(d2<R1) printf("1\n");
		else if(d2==R1)printf("2\n");
		else if(d2>R1&&d2<R2) printf("3\n");
		else if(d2==R2) printf("4\n");
		else if(d2>R2) printf("5\n"); 
	}
}
