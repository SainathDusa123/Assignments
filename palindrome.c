#include<stdio.h>

int main()
{
	int num,reverse =0,temp, digit;
	printf("Enter the number:\n");
	scanf("%d", &num);
        temp = num;
	while(num )
	{
           digit = num % 10;
	   reverse = reverse * 10 + digit;
	   num = num / 10;
	}

	if(reverse == temp)
		printf("Given number is palindrome: %d\n",temp);
	else 
		printf("Given number is not palindrome: %d\n", temp);

return 0;
}
