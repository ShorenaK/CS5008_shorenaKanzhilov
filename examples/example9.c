#include <stdio.h>

typedef struct student{
	int id;
	int age;
}student_t;


void printStudent(student_t* aStudent){
	printf("Student ID: %d, Age: %d\n",(*aStudent).id, (*aStudent).age);

}
int main(){
        student_t  s1;
        student_t  s2;

	//Lets assign some values to s1 and s2;
        
	s1.id = 1001;
	s1.age = 49;

	s2.id = 1002;
	s2.age = 56;


        printStudent(&s1);
	printStudent(&s2);
        return 0;
}
