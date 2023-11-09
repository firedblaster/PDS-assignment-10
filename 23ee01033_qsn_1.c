#include <stdio.h>

struct stud_info
{
	int roll_no; 
	char name[25];
	int age;	
} ;

void main()
{
	struct stud_info student[5];
	
	for (int i = 0 ; i < 5; i++)
	{
		student[i].roll_no = i+1; 
		printf("Enter The Student %d Name :	", i+1); 
		scanf("%s",&student[i].name);
		printf("Enter his/her Age :	");
		scanf("%d",&student[i].age);
	}
	
	printf("The Details of Student with Roll No. 2\n");
	printf("%s %d",student[1].name,student[1].age);

}