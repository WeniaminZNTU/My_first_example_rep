#include <locale.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

void print_pole(int pole[][4]);

int main(){
int pole[4][4];


for(int i = 0; i < 4; i++){
for(int j =0; j < 4; j++){
	pole[i][j] = 0;
}
}

pole[0][0] = 1;
pole[1][1] = 1;
pole[2][2] = 1;
pole[3][3] = 1;

print_pole(pole);

return 0;}

void print_pole(int pole[][4]){
int temp;
//������� ������ �������
for(int i = 0; i <= 13; i++) printf("*");

	for(int i = 0; i < 4; i++){
		printf("\n");//����� ������
		printf("*");//������� �����

			for(int j = 0; j < 4; j++){//������� �����
				temp = pole[i][j];
					if(temp != 0){printf(" %i ", temp);}//���� ������ �� ���������� ����
					if(temp == 0) printf("   ");//���� ����
					}
		printf("*");//������� ������
	}
	printf("\n");
//������ ������ �������
for(int i = 0; i <= 13; i++) printf("*");
/*for(int i = 0; i <= 10; i++)*/ printf("\n\n");
}

