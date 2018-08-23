#include<locale.h>
#include<stdio.h> 		//1.0 Нормальный ввод  
#include<time.h>  		//2.0 Рандом 
#include<stdlib.h>		//2.0 Сам алгоритм 
#include<conio.h> 		//3.0 Оптимизация
using namespace std;	//Подключить файловую систему, статистика


const int UP = 1;
const int DOWN = 2;
const int LEFT = 3;
const int RIGHT = 4;

int rand(int pole[][4]);

void print_pole(int pole[][4]);

void algorithm(int arr[][4], int znak);

int game();

int main(void){

game();

//int score = game();

printf("\nExit\n");	
return 0;}


int rand(int pole[][4]){
bool GAME_OVER;// функция на два вызова
int i;
int j;

//Проверка поля
for(int i = 0; i < 4; i++){
for(int j = 0; j < 4; j++){
	if(pole[i][j] == 0){
		GAME_OVER = false;
		break;}
	else GAME_OVER = true;
	}
}

//В случае если больше нет своблдных клеток - конец игры
if(GAME_OVER == true){
printf("			Game over\n");
return 0;}          //1й выход

//Рандом в небо
again:
	i = rand() % 4;
	j = rand() % 4;
	if(i == 4) i = 0;
	if(j == 4) j = 0;

if(pole[i][j] != 0) goto again;

else pole[i][j] = 2;
return 1;} //2й выход


void print_pole(int pole[][4]){
int temp;

printf("*************");//Верхняя строка границы

	for(int i = 0; i < 4; i++){
		printf("\n");//Новая строка
		printf("*");//граница слева

			for(int j = 0; j < 4; j++){//сновной вывод
				temp = pole[i][j];
					if(temp != 0){printf(" %i ", temp);}//если ячейка не равняеться нулю
					if(temp == 0) printf("   ");//Если ноль
					}
		printf("*");//Граница справа
	}
	printf("\n");

printf("*************");//Нижняя строка граници
/*for(int i = 0; i <= 10; i++)*/ printf("\n\n");
}


void algorithm(int arr[][4], int znak){

if(znak == UP) printf("UP\n");
if(znak == DOWN) printf("DOWN\n");
if(znak == LEFT) printf("LEFT\n");
if(znak == RIGHT) printf("RIGHT\n");

int first = 0;
int second = 1;
int three = 3;
int four = 4;

int i = 0, j = 0;

int tmp[4];

if(znak == UP) i = 3;//j++
if(znak == DOWN) i = 0;//j++
if(znak == LEFT) j = 3;//i++
if(znak == RIGHT) j = 0;//i++
for(int count = 0; ; count++){ //i с последнего эл до первого, main цикл

	tmp[i] = arr[i][j];

if(znak == UP && j <= 3) i--;
else if(znak == DOWN && j <= 3) i++;
else if(znak == LEFT && i <= 3) j++; 
else if(znak == RIGHT && i <= 3) j--;
else break;

if(count == 3){ //Остановка после буферизирования полоски
	count = 0;
if(znak == UP) i = 3;//j++
if(znak == DOWN) i = 0;//j++
if(znak == LEFT) j = 3;//i++
if(znak == RIGHT) j = 0;//i++

											printf("Строка в буфере, до алгоритма\n");
											for(int o = 3; o >= 0; o--) printf("%i",tmp[o]);
											printf("\n---------------------\n");
											
	//Работа с "строкой"
	for( ; second < 4, four > 1; first++, second++, three--, four--){
again://of second if
		if(tmp[three] == tmp[four]){//00nn
			tmp[three] = 0;
			tmp[four] = tmp[four] * 2;
			three--;
			four--;
		}

		if((tmp[three] != 0) && (tmp[four] == 0)){//0nn0
			three--;
			four--;
			goto again;
		}

		if( (tmp[first] == tmp[second]) != 0){ // nn
			tmp[first] = 0;
			tmp[second] *= 2;
			first++;
			second++;}

else		if( (tmp[first] == 0) && (tmp[second] == 0)){ //00
			first++;
			second++;}


//else		if( (tmp[first] != 0) && (tmp[second] == 0)){ //n0
//			tmp[second] = tmp[first];
//			tmp[first] = 0;
//		continue;}

else		if( (tmp[first] == 0) && (tmp[second] != 0)){ //0n
		continue;}										  //++ next iter

//		else printf("\nХъюстон, у нас проблемы\n");
		 
	}//Цикл АЛГОРИТМА


for(int f = 0, s = 1; f < 3; s++, f++) if((tmp[f] != 0) && (tmp[s] == 0) ){
	 	tmp[s] = tmp[f];
	 	tmp[f] = 0;}
	else continue;

if(znak == UP || DOWN) j++;
if(znak == LEFT || znak == RIGHT) i++;

//вписывание в массив
											printf("Строка после алгоритма\n");
											for(int o = 3; o>=0; o--) printf("%i",tmp[o]);
											printf("\n");
for(count = 0; count <= 3; count++){
	if(znak == UP) i++;//j++
	if(znak == DOWN) i--;//j++
	if(znak == LEFT) j++;//i++
	if(znak == RIGHT) j--;//i++
		arr[i][j] = tmp[i];}   //Используеться j из основного цикла



//if(first == 2 || first == 3 || first == 4){
	printf("\nВывод tmp(выходная строка #%i):\n", j);
	for(int i = 0; i < 4; i++) printf(" %i ", tmp[i]);
//	printf("\n");}

printf("Массив со строкой\n");
	for(int q = 0; q <= 3; q++){
		printf("\n");
		for(int w = 0; w <=3; w++){
			printf("%i ", arr[q][w]);
		}
	}
printf("\n");

first = 0;  //Инициалищацтя по новой,
second = 1;	//На cледующую строку arr
}//иф на вход в цикл

}//Main цикл


printf("\n\nКонтрольный вывод:\n");
for(int i = 0; i < 4; i++){
	printf("\n");
	for(int j = 0; j < 4; j++){
		printf("%i ", arr[i][j]);
	}
}
printf("\n"); //УДАЛИТЬ
return;}


int game(){
setlocale(LC_ALL, "Ukrainian");
srand(time(NULL));

char ch; //getch()
int znak;//switch
bool pole_NULL;//if(pole_NULL)

int pole[4][4];//игровое поле


//Инициализация игрового поля в нули, для управления выводом
if(pole_NULL == false){
	for(int i = 0; i < 4; i++){ //Вывод если не ноль
		for(int j = 0; j <= 3; j++){
			pole[i][j] = 0;
		}
	}
	pole_NULL = true;}

////Бесконечный цикл
while(ch != 27){

//По логике(проверка всего поля перед рандомом), надо вызывать функцию дважды
if(rand(pole) == 0) return 0;
if(rand(pole) == 0) return 0;
if(rand(pole) == 0) return 0;


//Интерфейс------
//ch = getch();
ch = getch();
if(ch == 13) break;//удалить, temp'овская строчка
//if(ch == 27) break;

if(ch == 72) algorithm(pole, UP);
if(ch == 80) znak = DOWN;
if(ch == 75) znak = LEFT;
if(ch == 77) znak = RIGHT;
//Конец приёма---

algorithm(pole, znak);

//вывод
print_pole(pole);

}

int integer = 0;//Настроить вывод, (счёт)
return integer;} //возвращение в вызывающую программу

