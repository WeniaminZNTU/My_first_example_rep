
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

if(znak == UP) i = 3;//j++
if(znak == DOWN) i = 0;//j++
if(znak == LEFT) j = 3;//i++
if(znak == RIGHT) j = 0;//i++
for(int count = 0, count1 = 0; count1 < 4; count++){ //i с последнего эл до первого, main цикл

	tmp[i] = arr[i][j];//Запись строки

if(znak == UP && j <= 3) i--;
else if(znak == DOWN && j <= 3) i++;
else if(znak == LEFT && i <= 3) j--; 
else if(znak == RIGHT && i <= 3) j++;
else break;

if(count == 3){ //Остановка после буферизирования полоски

printf("\n");
for(int N = 3; N >= 0; N--)printf("%i ", tmp[N]);
printf("\n");

for(int q = 0; q < 4; q++){
	printf("\n");
	for(int w = 0; w < 4; w++){
		printf("%i ", arr[q][w]);
	}
}
printf("\n");




	count = 0;//условие алгиритма(заполнение строки)
	count1++;//Щитает пройденные строки
if(znak == UP) i = 3;//j++
if(znak == DOWN) i = 0;//j++
if(znak == LEFT) j = 3;//i++
if(znak == RIGHT) j = 0;//i++

											printf("Строка в буфере, до алгоритма\n");
											for(int o = 3; o >= 0; o--) printf("%i",tmp[o]);
											printf("\n-----------Алгоритм-----------\n");

	//Работа с "строкой"
	for( ; four < 4; first++, second++){

		//nnnn
		if( (tmp[first] == tmp[second] == tmp[three] == tmp[four]) != 0){
			tmp[four] *= 2;
			tmp[three] *= 2;
			tmp[first] = 0;
			tmp[second] = 0;
			break;
		}

		if(tmp[first] == tmp[second])
		 if(tmp[second] == tmp[three] || tmp[second] == tmp[four]){
		 	tmp[four] *= 2;
		 	tmp[three] = tmp[first];
		 	tmp[second] = 0;
		 	tmp[first] = 0;
		 	break;
			}			
			
else	if(tmp[three] == tmp[four])
		 if(tmp[three] == tmp[second] || tmp[three] == tmp[first]){
		 	tmp[four] *= 2;
		 	tmp[three] = tmp[first];
		 	tmp[second] = 0;
		 	tmp[first] = 0;
		 	break;
			}


else	if( (tmp[first] == tmp[second]) != 0){ // nn
			tmp[first] = 0;
			tmp[second] *= 2;
			first++;
			second++;}

else	if( (tmp[first] == 0) && (tmp[second] == 0)){ //00
			first++;
			second++;}


else	if( (tmp[first] != 0) && (tmp[second] == 0)){ //n0
			tmp[second] = tmp[first];
			tmp[first] = 0;
			continue;}

else		if( (tmp[first] == 0) && (tmp[second] != 0)){ //0n
			continue;}										  //++ next iter

//		else printf("\nХъюстон, у нас проблемы\n");
		 
	}//Цикл АЛГОРИТМА
first = 0;  //Инициалищацтя по новой,
second = 1;	//На cледующую строку arr
three = 2;
four = 3;

for(int f = 0, s = 1; f < 3; s++, f++) if((tmp[f] != 0) && (tmp[s] == 0) ){
	 	tmp[s] = tmp[f];
	 	tmp[f] = 0;}
	else continue;


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
	printf("arr[i] = tmp[i]\n");
for( ; ; count++){
	arr[i][j] = tmp[i];

		printf("arr[%i] = %i : tmp[%i] == %i count:%i", i, arr[vert], i, tmp[goriz], count);
		printf("\n");
	if(znak == UP) vert++;//j++
	if(znak == DOWN) vert--;//j++
	if(znak == LEFT) goriz--;//i++
	if(znak == RIGHT) goriz++;//i++

if(count == 3) break;
}   //Используються i/j из основного цикла



//if(first == 2 || first == 3 || first == 4){
	printf("\nВывод tmp(выходная строка #%i):\n", j);
	for(int i = 3; i >= 0; i--) printf(" %i ", tmp[i]);
//	printf("\n");}

printf("\nМассив со строкой\n");
	for(int q = 0; q <= 3; q++){
		printf("\n");
		for(int w = 0; w <=3; w++){
			printf("%i ", arr[q][w]);
		}
	}
printf("\n");
}//иф на вход в цикл
if(znak == UP || DOWN) j++;
if(znak == LEFT || znak == RIGHT) i++;
}//Main цикл(Запись строки)


printf("\n\nКонтрольный вывод:\n");
for(int i = 0; i < 4; i++){
	printf("\n");
	for(int j = 0; j < 4; j++){
		printf("%i ", arr[i][j]);
	}
}
printf("\n"); //УДАЛИТЬ
return;}

