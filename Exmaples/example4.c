#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void foo(int arg1){
	printf("From ff: %d\n", arg1);
}

int sum(int a, int b){
	return a + b;

}


void bar();

int main(){
	foo(49);
	bar();
	return 0;
}

void bar(){
	int num1 = 5;
	int num2 = 6;
	int result = sum(num1, num2);
	printf("%d + %d = %d\n", num1, num2, result);

};


