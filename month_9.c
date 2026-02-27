#include<stdio.h>

int main()
{
  	int month=0,year=0;
	printf("Enter the month and year :");
	scanf("%d %d",&month,&year);
		
	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		if(month == 2)
		{
			printf("Given month has 29 days and 366 days ina year:\n");
		}

		else if(month == 4 || month == 6 || month == 9 || month == 11 )
		  printf("Given month has 30 days and 355 days in a year:\n");
		else if((month <=12 && month >=1) && month != 2)
		printf("Given month has 31 days and 365 days in a year:\n");
		else
		printf("Invalid month\n");
	}

	return 0;
}
