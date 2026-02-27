#include<stdio.h>

int main()
{
    int max, num1, num2, num3;
    printf("Enter the three numbers: \n");
    scanf("%d %d %d",&num1, &num2, &num3);

   max = (num1 > num2) ? (num1 > num3 ? num1 : num3) :( num2 > num3 ? num2  : num3) ;

   printf("Maximum of three numbers is :%d", max);

    return 0;
}

