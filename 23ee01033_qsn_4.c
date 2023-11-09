#include <stdio.h>
#include <string.h>

struct students {
	int reg;
	char name[30];
	char branch[15];
	float cg;
};

void search(struct students s[], int);

void sort (struct students s[]);

void main()
{
	struct students s[10];
	for (int i = 0; i < 10; i++)
	{
		printf("Enter Student No. %d\n",i+1);
		printf("Enter Reg. No :	");
		scanf("%d",&s[i].reg);
		printf("Enter Name :	");
		scanf("%s",&s[i].name);
		printf("Enter Branch :	");
		scanf("%s",&s[i].branch);
		printf("Enter CGPA :	");
		scanf("%f",&s[i].cg);
	} 
	
	int ele;
	printf("Enter Reg. No of Student to search :	");
	scanf("%d",&ele);
	search(s,ele);
	
	sort(s); 
	
	printf("\nSorted Array	:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("Sorted Student %d\n.",i+1);
		printf("Reg. No : %d\n",s[i].reg);
		printf("Name : %s\n",s[i].name);
		printf("Branch : %s\n",s[i].branch);
		printf("CGPA : %.2f\n",s[i].cg); 
	}
}

void search(struct students s[], int ele)
{
	int mark = 1;
	for (int i = 0; i < 10; i++)
	{
		if (s[i].reg == ele)
		{
			mark = 0;
			printf("Student Found\n");
			printf("Reg. No : %d\n",s[i].reg);
			printf("Name : %s\n",s[i].name);
			printf("Branch : %s\n",s[i].branch);
			printf("CGPA : %.2f\n",s[i].cg); 
		}	
	}
	if (mark)
			printf("Student Not Found\n");
}


void sort(struct students s[])
{
	int count,limit = 1, n = 10;;
	struct students temp;

	while (count != 0)
	{
		count = 0; 
		for (int i=0; i<n-1-limit; i++)
		{
			if (s[i].reg > s[i+1].reg)
			{
				temp = s[i];
				s[i] = s[i+1]; 
				s[i+1] = temp;
				count ++;
			}
		limit = count;	
		}
	}
}	