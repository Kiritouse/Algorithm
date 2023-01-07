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
	while (i < j) {//i<j��ʱ��Ҫ�����ж�
		do i++; while (q[i] < x);//
		do j++; while (q[j] > x);
		if (i < j) {
			if(flag==0){
			swap(&q[i], &q[j]);
			}
			else{
				swap(&q[i], &q[j]);
			swap(&students[i],&students[j]);
			}//��score���в�����ͬʱ��Ҳ��students���в���
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
		 x =  rank_score(rank);//��ѧ������������score���飬��ͨ���±�n���а�
		score[n] = round(100 + log(1 + (x - 32) / 32) * 10);
		n++;//������ת��Ϊ����
	}
	  for(int i = 0;i<n;i++){
			printf("%d %d\n",students[i],score[i]);
		}
	 

	//�ȶԷ����������򣬲�Ҫ���ǽ�ѧ�Ž��а�����
/*	quick_sort(score,0,n-1,flag);
	//֮��Ͳ��ð󶨽���������
	flag = 0;
	//Ȼ��ѭ��������һ��ѭ�������ϵ���Ѱ�һ�����ͬ������Σ�
    for( i = 1;i<n;i++){//i��������ĩβ��j�������濪ͷ
         j = i-1;//��ԭ��i��ֵ��j����������ͷ��ע����һ��while��ʱ��i�Ѿ�����ͬ�����������һ�����ˣ�for��ͷ����һ��i++
		while(score[i]==score[i-1]){//ע�⣬ʵ���������i��������������һ����
			i++;//���²��ϱ�����ֱ���ҵ�����ȵ��Ǹ�����
		}
		//��i��ǰ(������i֮ǰ��ѧ�Ž�������)
		quick_sort(students,j,i-1,flag);
	}
    for(int i = 0;i<n;i++){
		printf("%d %d\n",students[i],score[i]);
	}
	*/
}
