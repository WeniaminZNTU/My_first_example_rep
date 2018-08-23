#include<stdio.h> 		//1.0 Нормальный ввод  
#include<time.h>  		//2.0 Рандом 
#include<stdlib.h>		//2.0 Сам алгоритм 
#include<conio.h> 		//3.0 Оптимизация
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

int pole[4][4];//игровое поле
int tmp[4];

bool pole_NULL;


if(pole_NULL == false){ //Инициализация игрового поля в нули, для управления выводом
	for(int i = 0; i < 4; i++){ //Вывод если не ноль
		for(int j = 0; j <= 3; j++){
			pole[i][j] = 0;
		}
	}
	pole_NULL = true;
}

if((ran_i = rand() % 5) == 5) ran_i = 0;//Получаем первое рандомное значение i
if((ran_j = rand() % 5) == 5) ran_j = 0;//Получаем первое рандомное значение j
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

else{for( ; ; ){ //В случае повторения
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
//Конец инициализации 



for( ; ; ){ //Беск цикл, действия игрока
//Приём
ch = getch();

if(ch == 13) break;//удалить, temp'овская строчка
if(ch == 27) break;

if(ch == 72) znak = UP;
if(ch == 80) znak = DOWN;
if(ch == 75) znak = LEFT;
if(ch == 77) znak = RIGHT;
//Конец приёма




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


//Вывод
for(int i = 0; i <= 13; i++) printf("*");//Верхняя строка границы

	for(int i = 0; i < 4; i++){
		printf("\n");//Новая строка
		printf("*");//граница слева

			for(int j = 0; j < 4; j++){
				itemp = pole[i][j];
					if(itemp != 0){printf(" %i ", itemp);}//если ячейка не равняеться нулю
					if(itemp == 0) printf("   ");//Если ноль
			}
		printf("*");//Граница справа
	}
	printf("\n");

	for(int i = 0; i <= 13; i++) printf("*");//Нижняя строка граници
	/*for(int i = 0; i <= 10; i++)*/ printf("\n\n");
}

int integer = 0;//Настроить вывод, (счёт)
return integer;} //возвращение в подпрограмму

