#include <stdio.h>

typedef struct student{
	int id;
	int age;
}student_t;


void printStudent(student_t* aStudent){
	printf("Student ID: %d, Age: %d\n",(*aStudent).id, (*aStudent).age);

}

void updateStudent(student_t* aStudent, int age, int id){
	(*aStudent).age = age;
	(*aStudent).id = id;
}

int main(){
        student_t  s1;
        student_t  s2;

	updateStudent(&s1, 49, 1011);
	updateStudent(&s2, 56, 1012);


        printStudent(&s1);
	printStudent(&s2);

	updateStudent(&s2, s2.age, 1013);
	printStudent(&s2);

        return 0;
}
