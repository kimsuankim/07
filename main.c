#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void sub(void);
int main(int argc, char *argv[]) {
	int i; 
	for(i=0; i<3; i++)
	 sub();
	return 0;
}

void sub(void)
 {
 	int auto_count= 0; //stack에 0저장 
	static int static_count= 0;
	auto_count++; //stack 에 저장 
	static_count++; //data 에 저장 
	printf("auto_count=%d\n", auto_count); 
	printf("static_count=%d\n", static_count); 
	//stack 끝 
 }

