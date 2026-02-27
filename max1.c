#include<stdio.h>

int main()
{
    int max, num1, num2;
    printf("Enter the two numbers: \n");
    scanf("%d %d",&num1, &num2);

   max = (num1 > num2)? num1 : num2 ;

   printf("Maximum of two numbers is :%d", max);

    return 0;
}

