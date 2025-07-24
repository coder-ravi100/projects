/*ATM SIMULATOR*/
#include<stdio.h>
int main()
{
    int NEW_PIN , option;;
    printf("\n Enter Your PIN :");
    scanf("%d",&NEW_PIN);

        if (NEW_PIN == 2525)
        {
            printf("\n PIN Is Successfully.. \n");
            printf("\n Welcome To SBI Bank ATM  \n");
            printf("\n ===MAIN MENU=== \n");
            printf("\n 1. CHECK BALANCE");
            printf("\n 2. CASH WITHDRAW");
            printf("\n 3. DEPOSIT MONEY");
            printf("\n 4. CHANGE PIN");
            printf("\n 5. MINI STATEMENT");
            printf("\n 6. EXIT");

            printf("\n PLEASE CHOOSE A OPTION :");
            scanf("%d",&option);
            switch (option)
            {
                case 1:
                        int total_balance, cur_balance , avl_balance;
                            total_balance = cur_balance + avl_balance;
                            printf("\n Current Available Balance Is :%d",total_balance);
                break;
                case 2:
                        printf("\n In Multiple Of $100 Or 500$:");
                        
                break;
                case 3:

                break;
                case 4:
            
                break;
                case 5:

                break;
                case 6:

                break;
            }
        }
        else
        {
            printf("\n Invalid PIN Number..");
        }
       
    return 0;
}