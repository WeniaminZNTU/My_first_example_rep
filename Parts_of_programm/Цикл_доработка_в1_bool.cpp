#include <iostream>
#include <conio.h>
#include <cctype>
using namespace std;

int main(){
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

int ASCII;


while( ASCII != 13 ){

	cout<<" ";
	ch_e = getche();
ASCII = ch_e;
	cout<<":"<<ASCII<<endl;
ch_e = toupper(ch_e);
ASCII = ch_e;
	cout<<" "<<ch_e<<":"<<ASCII<<endl<<endl;
		if( ch_e == 'e'|| ch_e == 'E' )  e = true;
			else{ e = false; continue; }

	cout<<" ";
	ch_x = getche();
ASCII = ch_x;
	cout<<":"<<ASCII<<endl;
ch_x = toupper(ch_x);
ASCII = ch_x;
	cout<<" "<<ch_x<<":"<<ASCII<<endl<<endl;
		if( ch_x == 'x' || ch_x == 'X' && e == true )  x = true;
			else{ e = false; x = false; continue;}

	cout<<" ";
	ch_i = getche();
ASCII = ch_i;
	cout<<":"<<ASCII<<endl;
ch_i = toupper(ch_i);
ASCII = ch_i;
	cout<<" "<<ch_i<<":"<<ASCII<<endl<<endl;
		if( ch_i == 'i' || ch_i == 'I' && x == true ) i = true;
			else{e = false; x = false; i = false;}

	cout<<" ";
	ch_t = getche();
ASCII = ch_t;
	cout<<":"<<ASCII<<endl;
ch_t = toupper(ch_t);
ASCII = ch_t;
	cout<<" "<<ch_t<<":"<<ASCII<<endl<<endl;
		if( ch_t == 't' || ch_t == 'T' && i == true ) {exit = true;}
			else{e = false;  x = false; i = false;}

if(exit == true) break;
}
cout<<"Exit";
return 0;
}

