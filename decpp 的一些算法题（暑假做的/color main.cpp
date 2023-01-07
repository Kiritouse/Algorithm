#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int arr[101][101] = {1};//全部涂成红色 
		int m,n,k,x,y,count = 0,flag ;
		scanf("%d %d %d",&m,&n,&k);
		while(k--){
			scanf("%d %d",&x,&y);
			arr[x][y] = {0};//储存黑色坐标并且进行标记 
		}//思路就是先横向遍历，再纵向遍历
		//如果说这一行或者这一列没有黑色 ，那就直接将这一行或者列都变为1
		//如果有的话，这一行或者列都赋值为0 
		for(int i = 0;i<m;i++){//横向遍历 
		flag = 0;
			for(int j = 0;j<n;j++){
			  if(arr[i][j]==0){
			  	flag =1; //flag = 1代表这一行有黑色 ，先列循环找下有无黑色 
			  }
		   }
		    
			  if(flag){//如果有黑色，这一行所有的赋值为0 
			  	for(int j = 0;j<n;j++){
			  	arr[i][j] = {0};
			   }
			} 	
			
			
		} 
		for(int j = 0;j<n;j++){//纵向遍历 
		flag = 0; 
			for(int i = 0;i<m;i++){
				if(arr[i][j]==0){
					flag = 1;//这一列有黑色 
				}
			}
		     
			if(flag==0){//只要这一列没有黑色，全部赋值为1，涂为红色 
				arr[i][j] = {1};
			}
			if(arr[i][j])
			count++; 
		  }
			
		} 
	}
} 
