/* strcuture deep copy swallow copy */

#include<stdio.h>

typedef struct 
{
	char name[20];
	int rollnumber;
	float percentage;
}student_t;

void print_Details(student_t info)
{
	printf("Name: %s, Roll: %d, Percent: %f\n", info.name, info.rollnumber, info.percentage);
}

int main()
{
	student_t stu2, stu1 = { "RAMANA", 20, 85.2 };
	
	stu2 = stu1;
	print_Details(stu1);
	print_Details(stu2);

	stu1.rollnumber =  40;
	print_Details(stu1);

	if(stu1.rollnumber == stu2.rollnumber)
	{
		printf("Sructure copy is a Swallow Copy\n");
		print_Details(stu2);
	}
	else	
		printf("Sructure copy is a Deep Copy\n");

	return 0;

}


#if 0

	Test case 1:
	
	Student 1 details:	
	Name: RAMANA, Roll: 20, Percent: 85.199997

	Student 2 details after copied
	Name: RAMANA, Roll: 20, Percent: 85.199997
	
	Updated rollnumber in student 1
	Sructure copy is a Deep Copy

#endif

