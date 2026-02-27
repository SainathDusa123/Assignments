#include<stdio.h>

int main()
{
   int quantity, upr= 5,discount;
   printf("Enter the Quantity of products:");
   scanf("%d",&quantity);

   if(quantity > 30)
   {
	   discount = (quantity*5)/10;
           printf("Total amount of %d rs dicount on quantity over 30 %d products : %d",discount,quantity,(quantity*5)-discount);

   }

   else if(quantity > 50)
     {
             discount = (quantity*5)/15;
             printf("Total amount of %d rs dicount on quantity over 30 %d products : %d",discount,quantity,(quantity*5)-discount);
 
     }
return 0;

}
