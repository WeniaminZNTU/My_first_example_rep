#include<stdio.h> 		//1.0 ���������� ����  
#include<time.h>  		//2.0 ������ 
#include<stdlib.h>		//2.0 ��� �������� 
#include<conio.h> 		//3.0 �����������
using namespace std;	//


const int UP = 1;
const int DOWN = 2;
const int LEFT = 3;
const int RIGHT = 4;

int game();

int main(void){
	
int score = game();

printf("\nExit\n");	
return 0;}

int game(){
char ch;
int znak;
//int two = 2;
int itemp;

int ran_i;
int ran_j;

int first_ran_i;
int first_ran_j;

int pole[4][4];//������� ����
int tmp[4];

bool pole_NULL;


if(pole_NULL == false){ //������������� �������� ���� � ����, ��� ���������� �������
	for(int i = 0; i < 4; i++){ //����� ���� �� ����
		for(int j = 0; j <= 3; j++){
			pole[i][j] = 0;
		}
	}
	pole_NULL = true;
}

if((ran_i = rand() % 5) == 5) ran_i = 0;//�������� ������ ��������� �������� i
if((ran_j = rand() % 5) == 5) ran_j = 0;//�������� ������ ��������� �������� j
	first_ran_i = ran_i;
	first_ran_j = ran_j;
		pole[ran_i][ran_j] = 2;
//			printf("i=%i, j=%i\n", ran_i, ran_j);
//			printf("pole:%i,\n", pole[ran_i][ran_j]);

if((ran_i = rand() % 5) == 5) ran_i = 0;
if((ran_j = rand() % 5) == 5) ran_j = 0;
		pole[ran_i][ran_j] = 2;
//	printf("i=%i, j=%i\n", ran_i, ran_j);
//	printf("pole:%i,\n", pole[ran_i][ran_j]);


if(first_ran_i != ran_i && first_ran_j != ran_j) pole[ran_i][ran_j] = 2; 

else{for( ; ; ){ //� ������ ����������
		time(NULL);
		if((ran_i = rand() % 5) == 5) ran_i = 0;
		if((ran_j = rand() % 5) == 5) ran_j = 0;
			if(first_ran_i != ran_i && first_ran_j != ran_j){
				if(pole[ran_i][ran_j] == 0) break;
				 else continue;
			}
			else continue;
	}
}
//����� ������������� 



for( ; ; ){ //���� ����, �������� ������
//����
ch = getch();

if(ch == 13) break;//�������, temp'������ �������
if(ch == 27) break;

if(ch == 72) znak = UP;
if(ch == 80) znak = DOWN;
if(ch == 75) znak = LEFT;
if(ch == 77) znak = RIGHT;
//����� �����




switch(znak){
case UP:{

for(int i = 3; i <= 0; i++){
	for(int j = 0; j <= 3; i++){
		
	}
}

	break;}


case DOWN:{

	break;}


case LEFT:{

	break;} 


case RIGHT:{

	break;}

}


//�����
for(int i = 0; i <= 13; i++) printf("*");//������� ������ �������

	for(int i = 0; i < 4; i++){
		printf("\n");//����� ������
		printf("*");//������� �����

			for(int j = 0; j < 4; j++){
				itemp = pole[i][j];
					if(itemp != 0){printf(" %i ", itemp);}//���� ������ �� ���������� ����
					if(itemp == 0) printf("   ");//���� ����
			}
		printf("*");//������� ������
	}
	printf("\n");

	for(int i = 0; i <= 13; i++) printf("*");//������ ������ �������
	/*for(int i = 0; i <= 10; i++)*/ printf("\n\n");
}

int integer = 0;//��������� �����, (����)
return integer;} //����������� � ������������

