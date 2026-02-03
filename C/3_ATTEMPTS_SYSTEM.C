/*Three Time Attempts system*/
#include<stdio.h>
int main()
{
    int code = 3654;
    int code_Match;
    int num = 3 , i = 0;

    while (num > i) // 3>0 3>1 3>2
    {
        printf("\n Enter Your ATM PIN :");
        scanf("%d",&code_Match);
    if (code == code_Match)
    {
        printf("\n Access Granted Welcome");
    }
    else
    {
        i++;
        printf("\n Incorrect PIN. Attempts left :(%d)",num-i);//3-1=2 /2-1=1 /1-1=0
    }
  }
    if (i == num)
    {
        printf("\n Your account is blocked due to 3 wrong attempts");
    }
    
    return 0;
}