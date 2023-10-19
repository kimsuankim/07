#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int inc(int counter);
int main(int argc, char *argv[]) {
	
	int i=10;
	printf("함수호출전i= %d\n", i);
	i= inc(i); //변수=함수결과(함수에 의해 리턴된값) 
	printf("함수호출후 i= %d\n", i);
	
	return 0;
}
int inc(int counter)
{
	counter++;
	return counter;
}
