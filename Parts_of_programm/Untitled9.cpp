#include <ctime>
#include <iostream>
#include <cstdio>
using namespace std;



int main(){
bool true_false;

	int A[] = { 1, 2, 3, 4, 5, 6, 7 };
	int B[] = { 5, 6, 7, 8, 9, 10 };
	int C[] = { 1, 2, 3, 8, 9, 10};

	int U[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

cout<<"A: ";
	for(int i = 0; i<=10; i++){
		cout<<A[i]<<" ";
	if( B[i+1] == 0 ) break;
	}
cout<<endl;
cout<<"B: ";
	for(int i = 0; i<=10; i++){
		cout<<B[i]<<" ";
		if( B[i] == 10 ) break;
	}
/*
	for(int i = 0; i<=10; i++){
		if( i != 10 && true_false != true){
		cout<<"A:"<<A[i];
		if( i == 10 ) true_false = true;
		}
		if( true_false == true){
		cout<<"B:"<<B[i]<<endl;
		}
	}
*/

return 0;
}
