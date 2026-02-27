#include<stdio.h>

int main()
{
    int max, num1, num2, num3;
    printf("Enter the three numbers: \n");
    scanf("%d %d %d",&num1, &num2, &num3);

    if(num1 > num2)
    {
	    if (num1 > num3)
 		    printf("Number 1 is greater:%d \n",num1);
	    else
		    printf("Number 3 is greater:%d \n", num3);
    }
    else if(num2 > num3)
	    printf("Number 2 is greater:%d \n", num2);
	else
		printf("Number 3 is greater: %d\n", num3);

	return 0;
}

