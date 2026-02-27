#include<stdio.h>

int main()
{
	int year;
	printf("Enter the year:\n");
	scanf("%d",&year);

	if( year % 4 == 0)
	{
	   if (year % 100 == 0)
          {
               if (year % 400 == 0)
	       {
		       printf("Given year %d is leap year:\n",year);
		}
	       else 
		       printf("Given year %d is not leap year:\n",year);
	  }
	   else
		printf("Given year %d is leap year:\n",year);
	}
	else
		printf("Given year %d is not leap year:\n",year);


return 0;

}
