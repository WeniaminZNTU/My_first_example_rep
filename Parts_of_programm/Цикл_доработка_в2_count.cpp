#include <iostream>
#include <conio.h>
#include <cctype>
using namespace std;

int main(){
setlocale(LC_ALL, "Russian");

bool e;
bool x;
bool i;
bool t;

char ch;
int ASCII;

int count = 0;

while( ASCII != '\r' ){
//++count;
cout<<" ";

ch = getche();
ASCII = ch;
	cout<<":"<<ASCII;
ch = toupper(ch);
ASCII = ch;
	cout<<"	"<<ch<<":"<<ASCII<<endl;
/*
if( (ch == 'e' || ch == 'E') && count == 0 ) { e = true; ++count; continue;
ch != 'e' || 'E' ? 

if( ch == 'e' || ch == 'E' && count == 0  && (ch == 'x' || ch == 'X') && (count == 1 && e == true) ) { x = true; count++; continue;
else{count = 0; e = false; x = false;}

if( (ch == 'i' || ch == 'I') && (count == 2 && x == true) ) { i = true; count++; continue;
else{count = 0; i = false; x = false; e = false;}

if( (ch == 't' || ch == 'T') && (count == 3 && i == true) ) { break;}
else{count = 0; t = false; i = false; x = false; e = false;}
}
}
}
}
*/
}
return 0;

}
