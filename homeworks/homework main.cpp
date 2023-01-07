#include <stdio.h>
#include <math.h>
int students[505] = { 0 };
int ranks[505] = { 0 };
int score[505] = { 0 };
int rank_score(int rank) {
	int score;
	if (rank >= 1 && rank <= 12) {
		score = 32;
	}
	else if (rank >= 13 && rank <= 24) {
		score = 16;
	}
	else if (rank >= 25 && rank <= 48) {
		score = 8;
	}
	else if (rank >= 49 && rank <= 96) {
		score = 4;
	}
	else if (rank >= 97 && rank <= 192) {
		score = 2;
	}
	else score = 1;
	return score;
}
void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
void quick_sort(int q[],int l, int r,int flag) {
	if (l >= r) {
		return;
	}
	int i = l - 1, j = r + 1, x = q[(l + r) / 2];
	while (i < j) {//i<j的时候要不断判断
		do i++; while (q[i] < x);//
		do j++; while (q[j] > x);
		if (i < j) {
			if(flag==0){
			swap(&q[i], &q[j]);
			}
			else{
				swap(&q[i], &q[j]);
			swap(&students[i],&students[j]);
			}//对score进行操作的同时，也对students进行操作
		}
		else break;
	}
	quick_sort(q, l, j,flag);
	quick_sort(q, j+1,r,flag);
	
}
int main() {
	int qu = 0;
	int rank;
	int flag = 1;
	int n = 0;
	int i, j = 0,x;
	while (scanf("%d %d %d", &qu, &students[n],&rank) != EOF) {
		 x =  rank_score(rank);//将学生的排名输入score数组，且通过下标n进行绑定
		score[n] = round(100 + log(1 + (x - 32) / 32) * 10);
		n++;//将排名转化为分数
	}
	  for(int i = 0;i<n;i++){
			printf("%d %d\n",students[i],score[i]);
		}
	 

	//先对分数进行排序，不要忘记将学号进行绑定排序
/*	quick_sort(score,0,n-1,flag);
	//之后就不用绑定进行排序了
	flag = 0;
	//然后循环里面套一个循环，从上到下寻找积分相同的区间段，
    for( i = 1;i<n;i++){//i用来储存末尾，j用来储存开头
         j = i-1;//把原先i的值给j用来当作开头，注意上一次while的时候i已经在相同的区间的下面一个数了，for开头还有一个i++
		while(score[i]==score[i-1]){//注意，实际上这里的i是相等区间的下面一个数
			i++;//向下不断遍历，直到找到不相等的那个区间
		}
		//将i以前(不包括i之前的学号进行排序)
		quick_sort(students,j,i-1,flag);
	}
    for(int i = 0;i<n;i++){
		printf("%d %d\n",students[i],score[i]);
	}
	*/
}
