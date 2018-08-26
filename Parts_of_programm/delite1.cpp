#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int n = 10;

int fyn1(int *n);

//void fyn2(*n);

int main(){

int n = 10;
int nn;

cout<<"main:";
nn = fyn1(&n);
cout<<"nn:"<<nn<<"endl";
//if( fyn1() == 1 ) cout<<"1";


return 0;
}

int fyn1(int *n){
*n = *n + *n;
return 1;
}

int fun2(){
return 1;
}
/*
void fyn2(*n){
cout<<"n ="<<*n;
*n = *n + *n;
int *nnn = *n;
printf("fyn1(*n) = %i", fyn1(&nnn) );
return;
}
*/
