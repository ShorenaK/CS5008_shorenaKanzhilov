 #include <stdio.h>
struct student{
	int id;
	int age;
	double creditHours;
};

int main(){
	struct student s1;
	s1.id = 1001;
	s1.age = 49;
	s1.creditHours = 14.5;

	struct student s2;
	s2.id = 1011;
	s2.age = 29;
	s2.creditHours = 16.7;

	printf("Student: %d, %d, %f\n", s1.id, s1.age, s1.creditHours);
	printf("Student: %d, %d, %f\n", s2.id, s2.age, s2.creditHours);
	return 0;


}
