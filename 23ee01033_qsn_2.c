#include <stdio.h>

struct time {	
	int hours;
	int mins;
	int sec;
} ;
void main()
{
    int i=1;
	struct time t1,t2,td; 
	printf("Enter Time 1 (The time which is behind) (HOUR:MIN:SEC FORMAT) (24Hrs) : \n");
	scanf("%d %d %d",&t1.hours,&t1.mins,&t1.sec);
	printf("Enter Time 2 (The time which is ahead) (HOUR:MIN:SEC FORMAT) (24Hrs) : \n");
	scanf("%d %d %d",&t2.hours,&t2.mins,&t2.sec);
    while(i!=0)
    {
        if(t2.hours>=24 || t1.hours>=24 ||t2.mins>=60 || t1.mins>=60 ||t2.sec>=60 || t1.sec>=60 )
    {
        printf("There is an error in your time input, please try again");
        break;
    }
	if (t2.sec >= t1.sec)
	{
		td.sec = t2.sec - t1.sec ; 
	}
	else
	{
		td.sec = t2.sec - t1.sec + 60;
		t2.mins += - 1 ;
	}
	if (t2.mins >= t1.mins)
	{
		td.mins = t2.mins - t1.mins ; 
	}
	else
	{
		td.mins = t2.mins - t1.mins + 60;
		t2.hours += 1 ;
	}
	if (t2.hours >= t1.hours)
		td.hours = t2.hours - t1.hours;
	else
	{
		td.hours = t2.hours - t1.hours + 24;
	}; 
    printf("Time difference between %.2d:%.2d:%.2d and %.2d:%.2d:%.2d\n",t2.hours,t2.mins,t2.sec,t1.hours,t2.mins,t2.sec);
	printf("%.2d:%.2d:%.2d\n",td.hours,td.mins,td.sec);
    i=0;
    }
    }
    
	
