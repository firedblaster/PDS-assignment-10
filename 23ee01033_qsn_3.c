#include <stdio.h>
#include <string.h>

struct student 
{
	char name[30];
	int marks[5];
};

void main()
{
	int n; 
	printf("Enter No. of Students(integer value only) :	");
	scanf("%d",&n);
	struct student s[n]; 
	for (int i = 0; i < n; i++)
	{
		printf("\nEnter %d Student Name(first name only) : ", i + 1);
		scanf("%s", &s[i].name);
		printf("\nEnter Marks of 5 Subjects(integer values only seperated with space) :");
		scanf("%d %d %d %d %d", &s[i].marks[0],&s[i].marks[1],&s[i].marks[2],&s[i].marks[3],&s[i].marks[4]);
	}
	char elements[30];
	printf("\nEnter The Students Name to Search : ");
	scanf("%s",&elements); 
	int m= 1; 
	for (int i = 0; i < n; i++)
	{
		if (strcmp(s[i].name,elements)==0)
		{
			m  = 0; 
			int sum = s[i].marks[0] + s[i].marks[1] + s[i].marks[2]+ s[i].marks[3] + s[i].marks[4];
			float avg = sum/5.0; 
			printf("Student Found\n");
			printf("Name : %s\n",elements);
			printf("Total : %d\t Avg : %.2f\n",sum,avg);
		}
	}
	if (m)
		printf("Student Not Found\n");
}