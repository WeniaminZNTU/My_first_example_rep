#include<iostream>
#include<conio.h>
using namespace std;

void exitf();

int main(int argc, char *argv[]){
exitf();
return 0;
}

void exitf(){

setlocale(LC_ALL, "Ukrainian");
setlocale(LC_ALL, "Rassian");

bool e;
bool x;
bool i;
bool exit;

char ch_e;
char ch_x;
char ch_i;
char ch_t;

while(exit != true){

	ch_e = getche();
		if( ch_e == 'e'|| ch_e == 'E' )  e = true;
			else{ e = false; continue; }


	ch_x = getche();
		if( ch_x == 'x' || ch_x == 'X' && e == true )  x = true;
			else{ e = false; x = false; continue;}

	ch_i = getche();
		if( ch_i == 'i' || ch_i == 'I' && x == true ) i = true;
			else{e = false; x = false; i = false;}

	ch_t = getche();
		if( ch_t == 't' || ch_t == 'T' && i == true ) {exit = true;}
			else{e = false;  x = false; i = false;}

//if(exit == true) break;
}
//cout<<"Exit";
//return 0;
}

