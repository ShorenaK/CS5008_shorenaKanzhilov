#include <stdio.h>

void update(int argument){
	argument = 10;
}

int main(){
	int value = 5;
	int* p_value = &value;
	printf("Value is: %d\n", value);
	printf("The address of value is: %p\n", p_value);
	update(value);
	printf("Value is: %d\n", value);
	return 0;

}

