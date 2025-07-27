/*ATM SIMULATOR*/
#include<stdio.h>
int main()
{
    int NEWPIN;
    int MaxAttempt = 3 , Attempt = 0;
    int choice;
    int currect_balance = 50000;
    int withdraw;
    int deppsit;
    up:
    while (Attempt < MaxAttempt)
    {
        printf("\n ENTER YOUR ATM PIN :");
        scanf("%d",&NEWPIN);
        if (NEWPIN == 123)
        {
            printf("\n ACCESS GRANTED WELCOME \n");
            printf("\n WELCOME TO SBI BANK ATM");
            printf("\n =======ATM MENU========");
            printf("\n 1.CHECK BALANCE");
            printf("\n 2.CASH WITHDRAW");
            printf("\n 3.DEPOSIT MONEY");
            printf("\n 4.CHANGE PIN");
            printf("\n 5.MINI STATEMENT");
            printf("\n 6.EXIT");
            printf("\n PLEASE CHOOSE OPTION :");
            scanf("%d",&choice);
            switch (choice)
            {
                case 1:
                        printf("\n CURRECT AMOUNT BALANCE %d ",currect_balance);
                break;
                case 2:
                      
                       printf("\n Enter Your Amount : ");
                       scanf("%d", &withdraw);

                       if (withdraw < currect_balance)
                        {
                        printf("\n Transaction Successful!");
                        printf("\n Available Balance is : %d", currect_balance - withdraw);
                        }
                      else
                       {
                          printf("\n Not Enough Balance. Your Balance is : %d", currect_balance);
                       }
                       
                break;
                case 3:
                       printf("\n Deposit Your Amount : ");
                       scanf("%d", &deppsit);

                       if (withdraw > 100)
                        {
                        printf("\n Deposite is Successful!");
                        printf("\n Available Balance is : %d", currect_balance + deppsit);
                        }
                      else
                       {
                          printf("\n Invalid Your Amount :");
                       }
                break;
                case 4:

                break;
                case 5:

                break;
                case 6:
                        
                break;
            }
            break;
        }
        else
        {
            Attempt++;
            printf("\n INCORRECT PIN ATTEMPTS LEFT :(%d)",MaxAttempt - Attempt);
        }
    }
    if (Attempt == MaxAttempt)
    {
        printf("\n YOUR ACCOUNT IS BLOCKED DUE TO 3 WRONG ATTEMPTS");
    }
        goto up;
    return 0;
}