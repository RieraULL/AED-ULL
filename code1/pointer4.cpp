
/* Compilar: gcc -g pointer4.c -o pointer4C       */                                                         


#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

#define MAXIMO 5

int main(void){
	
	int numbers[MAXIMO];
 	
	int *p = NULL; 
	
	p = numbers;     *p = 10; 
	p ++;            *p = 20; 
	p = &numbers[2]; *p = 30; 
	p = numbers + 3; *p = 40; 
	p = numbers;     *(p+4) = 50;

	for(int i = 0; i < MAXIMO; i++)
		cout << setw(4) << numbers[i] << endl;			
}
