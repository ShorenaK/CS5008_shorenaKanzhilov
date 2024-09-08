#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void foo(int arg1){
	printf("From ff: %d\n", arg1);
}

void bar();

int main(){
	foo(49);
	bar();
	return 0;
}

void bar(){
	printf("bar()\n");

}


