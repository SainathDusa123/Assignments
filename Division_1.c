#include<stdio.h>

int main()
{
     int num1, num2;
     printf("Enter the two numbers:");
     scanf("%d %d", &num1, &num2);
     int res = num1 / num2;
     if (num2 == 0)
     {
        printf("Division by zero is undefined\n");   
     }
     else
       printf("Result of Division is: %d\n", res);



    return 0;
}
