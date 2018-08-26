#include <iostream>
#include <cstdio>
#include <conio.h>
using namespace std;

#define van 1

int f1(int *temp);

void f2(int & temp);

int main(){
int temp;
cin>>temp;
if(temp == van) cout<<temp;


f2(temp);
	
return 0;
}

int f1(int *temp ){

cin>>*temp;

	if(*temp == 0) return 0;
		return 1;
}



void f2(int & temp){
//Функция алгоритма вывода информации

//int *temp_f2 = & temp;
//int temp_f2 = f1(&temp);
//int temp1 = temp;

	if( f1(&temp) == 1 ){
		cout<<temp<<endl;
		cout<<"Fine"<<endl;
	}

return;
}

