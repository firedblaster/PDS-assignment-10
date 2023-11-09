#include <stdio.h>
#include <string.h> 

struct bank {
	char name[30];
	int acc;
	float amount; 
};

void check50k(struct bank b[],int n)
{
	printf("Customers with Balance > 50000.00\n");
	for (int i = 0; i < n; i++)
	{
		if (b[i].amount > 50000.00)
			printf("%s ",b[i].name);
	}
	printf("\n");	
}

void add(struct bank b[],int n)
{
	printf("Adding 1000.00 to Balance > 10000.00\n");
	printf("Updated Accounts\n");
	for (int i = 0; i < n; i++)
	{
		if (b[i].amount > 10000.00)
		{
			b[i].amount += 1000.00;
			printf("%s -> %.2f\n",b[i].name,b[i].amount);
		}
	}
}

float withdraw(struct bank b[], float amt, int acc, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (b[i].acc == acc)
		{
			b[i].amount -= amt;
			if (b[i].amount > 0) 
				return b[i].amount;
			else
				return -1; 
		}
	}	
	return -2; 
}

void main()
{
	int n = 15; 
	struct bank b[n];
	
	for (int i = 0; i < n; i++)
	{
		printf("Customer %d\n",i+1);
		printf("Enter Customer Name :");
		scanf("%s",&b[i].name);
		printf("Enter Acc Num :");
		scanf("%d",&b[i].acc);
		printf("Enter Initial Acc Balance :");
		scanf("%f",&b[i].amount);
	}
	
	check50k(b,n);
	
	printf("\n");
	
	add(b,n);
	
	printf("\n");
	
	float amt;
	int acc;
	printf("Enter Bank Acc to Withdraw Amt from :");
	scanf("%d",&acc);
	printf("Enter Amount to Withdraw :");
	scanf("%f",&amt);
	
	float final = withdraw(b,amt,acc,n);
	if (final == -1)
	{
		printf("Insufficient Funds\n");
	}
	else if (final == -2)
	{
		printf("The Acc is not Found\n");
	}
	else
	{
		printf("%.2f Amount is Withdrawn. Current Balance is %.2f\n",amt,final);
	}

}

