// C program to pass structure as an argument to the
// functions using Call By Reference Method

#include <stdio.h>

struct student {
	char name[50];
	int roll;
	float marks;
};

void display(struct student* student_obj)
{
	printf("Name: %s\n", student_obj->name);
	printf("Roll: %d\n", student_obj->roll);
	printf("Marks: %f\n", student_obj->marks);
}
int main()
{
	struct student st1 = { "Aman", 19, 8.5 };

	display(&st1);

	return 0;
}

