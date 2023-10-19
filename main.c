#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void f(void);
int i; //i=0
int main(int argc, char *argv[]) {
	
	for(i=0; i<5; i++) //i=0 에서 시작 
	{
		f();// #*10, i는 10이됨
	}

	return 0;
}

void f(void)
 {
 	for(i=0; i<10; i++) //열번반복, i=10저장 
 	 printf("#");
 }

