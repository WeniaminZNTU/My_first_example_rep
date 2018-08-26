#include <iostream>
#include <conio.h>
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
	cout<<":"<<ASCII<<endl;

if( (ch == 'e'|| ch == 'E') && e == false ){ e = true; count++; continue;}
else{count = 0; e = false; }

if( (ch == 'x' || ch == 'X') && x == false ){ x = true; count++; continue;}
else{count = 0; e = false; x = false;}
			
if( (ch == 'i' || ch == 'I') && i == false ){ i = true; count++; continue;}
else{count = 0; i = false; x = false; e = false;}
			
if( (ch == 't' || ch == 'T') && count == 3  ){ break;}
else{count = 0; t = false; i = false; x = false; e = false;}
}

return 0;

}
