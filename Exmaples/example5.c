 #include <stdio.h>
struct student{
	int id;
	int age;
	double creditHours;
};

struct student makeStudent(int id, int age, double creditHours){
	struct student tempStudent;
	tempStudent.id = id;
	tempStudent.age = age;
	tempStudent.creditHours = creditHours;
	return tempStudent;
}
int main(){
	struct student s1 = makeStudent(1001, 49, 14.5);
	struct student s2 = makeStudent(1011, 29, 17.9);

	printf("Student: %d, %d, %f\n", s1.id, s1.age, s1.creditHours);
	printf("Student: %d, %d, %f\n", s2.id, s2.age, s2.creditHours);
	return 0;


}
