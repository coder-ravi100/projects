/*MINI CALCULATORS USING LOOP*/
#include<stdio.h>
int main()
{
   
    float num1 = 20 ,num2 = 30, ans;
    int choice;
    do
    {
    printf("\n =======");
    printf("\n----Mini Calculator----");
    printf("\n 1.Addition");
    printf("\n 2.Subtraction");
    printf("\n 3.Multiplication");
    printf("\n 4.Division");
    printf("\n 5.Exit");
    printf("\n Enter Your Choice :");
    scanf("%d",&choice);
    printf("\n ========");
    
    switch (choice)
    {
        case 1:
                printf("\nResult %.2f ",ans = num1+num2);
        break;

        case 2:
                printf("\nResult %.2f ",ans = num1-num2);
        break;

        case 3:
                printf("\nResult %.2f ",ans = num1*num2);
        break;

        case 4:
                printf("\nResult %.2f ",ans = num1/num2);
        break;

        case 5:
               printf("\nExiting Calculator. Thank you!");  
        break;

         default:
         {
             printf("\nInvalid Choice! Please try again.");
         }
    }
    

    } while (choice != 5);
    
    return 0;
}