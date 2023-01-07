#include <stdio.h>
#include <math.h>
int a[2000000] = { 1,1 };
int b[2000] = { 0 };
char map[4001][4001] = {0};//��һ�����ͼ,ȫ����ֵΪ�ո�
int mapUP[4001] = {0};
int mapRIGHT[4001]={0};
int mapLEFT[4001]={0};
int mapDOWN[4001]={0};
int max2(int a, int b) {
      if(a>=b){
	  	return a;
	  }
	  else return b;
}
int min2(int a, int b) {
	if(a>=b){
		return b;
	}
	else {
		return a;
	}
}
void sushu() {
	int k = 0;
	for (int i = 2; i <= 1000; i++) {
		if (a[i] == 0) b[++k] = i;
		for (int j = 1; j <= k; j++) {
			if (i * b[j] >= 1000) break;
			a[i * b[j]] = 1;
			if (i % b[j] == 0) break;
		}
	}
}
//��ʼ���˵�ͼ
void mapini() {
	for (int i = 0; i <= 4000; i++) {
		mapRIGHT[i] = 2000;
		mapUP[i] = 2000;
		mapLEFT[i] = 2000;
		mapDOWN[i] = 2000;
		for (int j = 1; j <= 4000; j++) {
			map[i][j] = ' ';//��ʼ���ո�
		}
	}
}//��ͼ��ʼ��
//�����˵�ͼȻ���ѡ�˵�ͼ��ͨ��ѡȡ�ĸ��߽�㣩
void drawandmapcs() {
	int dir = 1;
	int x= 2000, y= 2000;//�������ڵĺ�������
	for (int i = 1; i <= 168; i++) {
		dir %= 4;
		mapRIGHT[i] = mapRIGHT[i - 1];
		mapUP[i] = mapUP[i - 1];
		mapLEFT[i] = mapLEFT[i - 1];
		mapDOWN[i] = mapDOWN[i - 1];//�̳��������һ�����ֵĵ�ͼ��С
		for (int i = 1; i <= b[i]; i++) {
			mapRIGHT[i] = max2(x, mapRIGHT[i]);
			mapUP[i] = max2(y, mapUP[i]);
			mapLEFT[i] = min2(x, mapLEFT[i]);
			mapDOWN[i] = min2(y, mapDOWN[i]);
			if (dir == 1) {
				map[x][y] = '_';
				x++;
			}
			if (dir == 2) {
				map[x][y] = '|';
				y--;
			}	
			if (dir == 3) {
				map[x][y] = '_';
				x--;
			}
			if (dir == 0) {
				map[x][y] = '|';
				y++;
			}
			if (dir == 2) x--;
			if (dir == 3)y++;
			if (dir == 0) {
				y--;
				x++;
			}
			
		}
	}
}
void prfmap(int num) {//���ϵ��´�����ɨ��
	for (int i = mapDOWN[num]; i <= mapUP[num]; i++) {
		int spacecnt = 0;
		for (int j = mapLEFT[num]; j <= mapRIGHT[num]; j++) {
			if (map[j][i] != ' ') {//����ɨ������ڵ�ͼ�﷢���˲��ǿո�ĵط�
				//��ô��������
				for (int v = 1; v <= spacecnt; v++) {
					printf(" ");
				}
				spacecnt = 0;//����
			}
			else {//��¼�ո������
				spacecnt++;
				break;
			}
			printf("%c", map[j][i]);
		}
		printf("\n");
	}
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		sushu();
		mapini();
		drawandmapcs();
		prfmap(n);
	}
	

	//������ȣ�b�д��������е�����
}
