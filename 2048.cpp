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
printf("					   2048 The consol game\n");

game();

//int score = game();

printf("\nExit\n");	
return 0;}


int rand(int pole[][4]){
bool GAME_OVER;
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
//В случае если больше нет свободных клеток - конец игры
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
int three = 2;
int four = 3;

int i = 0, j = 0;

int tmp[4];

for(int count_str = 0; count1 < 4; count++){ //i с последнего эл до первого, main цикл
/*
printf("\n");
for(int N = 3; N >= 0; N--)printf("%i ", tmp[N]);
printf("\n");

for(int q = 0; q < 4; q++){
	printf("\n");
	for(int w = 0; w < 4; w++){
		printf("%i ", arr[q][w]);
	}
}
printf("\n");*/
//-----------------------------------------Инициализация, проверка
if(znak == UP) i = 3;//j++
if(znak == DOWN) i = 0;//j++
if(znak == LEFT) j = 3;//i++
if(znak == RIGHT) j = 0;//i++

					printf("Строка в буфере, до алгоритма\n");
					for(int o = 3; o >= 0; o--) printf("%i",tmp[o]);
					printf("\n-----------Алгоритм-----------\n");

	//Работа с "строкой"
for( int vert, goriz; four < 4; first++, second++){
	if(znak == UP || znak == DOWN){
		//nnnn
		if( (arr[i][first] == arr[i][second] == arr[i][three] == arr[i][four]) != 0){
			arr[i][four] *= 2;
			arr[i][three] *= 2;
			arr[i][first] = 0;
			arr[i][second] = 0;
			break;
		}

		if(arr[i][first] == arr[i][second])
		 if(arr[i][second] == arr[i][three] || arr[i][second] == arr[i][four]){
		 	arr[i][four] *= 2;
		 	arr[i][three] = arr[i][first];
		 	arr[i][second] = 0;
		 	arr[i][first] = 0;
		 	break;
			}			
			
else	if(arr[i][three] == arr[i][four])
		 if(arr[i][three] == arr[i][second] || arr[i][three] == arr[i][first]){
		 	arr[i][four] *= 2;
		 	arr[i][three] = arr[i][first];
		 	arr[i][second] = 0;
		 	arr[i][first] = 0;
		 	break;
			}


else	if( (arr[i][first] == arr[i][second]) != 0){ // nn
			arr[i][first] = 0;
			arr[i][second] *= 2;
			first++;
			second++;}

else	if( (arr[i][first] == 0) && (arr[i][second] == 0)){ //00
			first++;
			second++;}


else	if( (arr[i][first] != 0) && (arr[i][second] == 0)){ //n0
			arr[i][second] = arr[i][first];
			arr[i][first] = 0;
			continue;}

else		if( (arr[i][first] == 0) && (arr[i][second] != 0)){ //0n
			continue;}										  //++ next iter
}



	if(znak == UP || znak == DOWN){
		//nnnn
		if( (arr[first][j] == arr[second][j] == arr[three][j] == arr[four][j]) != 0){
			arr[four][j] *= 2;
			arr[three][j] *= 2;
			arr[first][j] = 0;
			arr[second][j] = 0;
			break;
		}

		if(arr[first][j] == arr[second][j])
		 if(arr[second][j] == arr[three][j] || arr[second][j] == arr[four][j]){
		 	arr[four][j] *= 2;
		 	arr[three][j] = arr[first][j];
		 	arr[second][j] = 0;
		 	arr[first][j] = 0;
		 	break;
			}			
			
else	if(arr[three][j] == arr[four][j])
		 if(arr[three][j] == arr[second][j] || arr[three][j] == arr[first][j]){
		 	arr[four][j] *= 2;
		 	arr[three][j] = arr[i][first];
		 	arr[second][j] = 0;
		 	arr[first][j] = 0;
		 	break;
			}


else	if( (arr[first][j] == arr[second][j]) != 0){ // nn
			arr[first][j] = 0;
			arr[second][j] *= 2;
			first++;
			second++;}

else	if( (arr[first][j] == 0) && (arr[second][j] == 0)){ //00
			first++;
			second++;}


else	if( (arr[first] != 0) && (arr[second][j] == 0)){ //n0
			arr[second][j] = arr[first][j];
			arr[first][j] = 0;
			continue;}

else		if( (arr[first][j] == 0) && (arr[second][j] != 0)){ //0n
			continue;}										  //++ next iter
}




}//Цикл АЛГОРИТМА
first = 0;  //Инициалищацтя по новой,
second = 1;	//На cледующую строку arr
three = 2;
four = 3;

if(znak == Up){
for(int v_b = 0, v_e = 3, g= goriz; v_e >= v_b; v_b++, v_e-- )
	temp = arr[v_b][goriz];
	arr[v_b][goriz] = arr[v_e][goriz];
	arr[v_e][goriz] = temp;
}

if(znak == RIGHT){
for(int g_b = 0, g_e = 3, v= vert; g_e >= g_b; g_b++, g_e-- )
	temp = arr[vert][g_b];
	arr[vert][g_b] = arr[vert][g_e];
	arr[vert][g_e] = temp;
}




//вписывание в массив
								printf("Строка после алгоритма, перед вписыванием в массив\n");
								for(int o = 0; o< 4; o++) printf("%i",tmp[o]);
								printf("\n");

int vert;//i
int goriz;//j
if(znak == UP) vert = 0, goriz = j;
if(znak == DOWN) vert = 3, goriz = j;
if(znak == LEFT) vert = i, goriz = 3;
if(znak == RIGHT) vert = i, goriz = 0;


if(znak == UP || DOWN) j++;
if(znak == LEFT || znak == RIGHT) i++;
}//Main цикл(Запись строки)


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
	pole[0][0] = 2;
	pole[2][1] = 2;
	print_pole(pole);//Дефолтный вывод
	pole_NULL = true;}

////Бесконечный
while(ch != 27){

//По логике(проверка всего поля перед рандомом), надо вызывать функцию дважды
if(rand(pole) == 0) return 0;
//if(rand(pole) == 0) return 0;


//Интерфейс------
ch = getch();
if(ch == 13) break;//удалить, temp'овская строчка
if(ch == 72) algorithm(pole, UP);
if(ch == 80) algorithm(pole, DOWN);
if(ch == 75) algorithm(pole, LEFT);
if(ch == 77) algorithm(pole, RIGHT);
//Конец приёма---

}

const int UP = 1;
const int DOWN = 2;
const int LEFT = 3;
const int RIGHT = 4;



int score = 0;//Настроить вывод, (счёт)
return score;} //возвращение в вызывающую программу

