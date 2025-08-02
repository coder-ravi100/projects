/*ATM SIMULATOR*/
#include <stdio.h>

int main()
{
    int NEWPIN = 123;
    int MaxAttempt = 3, Attempt = 0;
    int currect_balance = 50000;
    int choice, withdraw, deppsit;

    
    while (Attempt < MaxAttempt)
    {
        int enteredPIN;
        printf("\nENTER YOUR ATM PIN: ");
        scanf("%d", &enteredPIN);

        if (enteredPIN == NEWPIN)
        {
            printf("\nACCESS GRANTED. WELCOME TO SBI BANK ATM\n");

            
            while (1)
            {
                printf("\n======= ATM MENU =======");
                printf("\n1. CHECK BALANCE");
                printf("\n2. CASH WITHDRAW");
                printf("\n3. DEPOSIT MONEY");
                printf("\n4. CHANGE PIN");
                printf("\n5. MINI STATEMENT");
                printf("\n6. EXIT");
                printf("\nCHOOSE OPTION: ");
                scanf("%d", &choice);

                switch (choice)
                {
                    case 1:
                        printf("\nCURRENT BALANCE: %d", currect_balance);
                        break;

                    case 2:
                        printf("\nENTER AMOUNT TO WITHDRAW: ");
                        scanf("%d", &withdraw);

                        if (withdraw > 0 && withdraw <= currect_balance)
                        {
                            currect_balance  = currect_balance + withdraw;
                            printf("\nWITHDRAW SUCCESSFUL. NEW BALANCE: %d", currect_balance);
                        }
                        else
                        {
                            printf("\nINSUFFICIENT BALANCE OR INVALID AMOUNT.");
                        }
                        break;

                    case 3:
                        printf("\nENTER AMOUNT TO DEPOSIT: ");
                        scanf("%d", &deppsit);

                        if (deppsit >= 100)
                        {
                            currect_balance = currect_balance + deppsit;
                            printf("\nDEPOSIT SUCCESSFUL. NEW BALANCE: %d", currect_balance);
                        }
                        else
                        {
                            printf("\nINVALID DEPOSIT. AMOUNT MUST BE AT LEAST ₹100.");
                        }
                        break;

                    case 4:
                        {
                            int UPDATEPIN;
                            printf("\nENTER NEW PIN: ");
                            scanf("%d", &UPDATEPIN);

                            if (UPDATEPIN == NEWPIN)
                            {
                                printf("\nNEW PIN CANNOT BE SAME AS OLD PIN.");
                            }
                            else if (UPDATEPIN < 1000 || UPDATEPIN > 9999)
                            {
                                printf("\nPIN MUST BE A 4-DIGIT NUMBER.");
                            }
                            else
                            {
                                NEWPIN = UPDATEPIN;
                                printf("\nPIN UPDATED SUCCESSFULLY.");
                            }
                        }
                        break;

                    case 5:
                        printf("\n(MINI STATEMENT FEATURE COMING SOON)");
                        break;

                    case 6:
                        printf("\nTHANK YOU FOR USING SBI ATM. GOODBYE!\n");
                        return 0;

                    default:
                        printf("\nINVALID CHOICE. PLEASE TRY AGAIN.");
                }
            }
        }
        else
        {
            Attempt++;
            printf("\nINCORRECT PIN. ATTEMPTS LEFT: %d", MaxAttempt - Attempt);
        }
    }

    printf("\nYOUR ACCOUNT IS BLOCKED DUE TO 3 WRONG ATTEMPTS.\n");

    return 0;
}
