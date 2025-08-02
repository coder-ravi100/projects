/*MINI CALCULATORS*/
#include<stdio.h>

int add(int a,int b) {
    return a + b;
}

int sub(int a,int b) {
    return a - b;
}

int mul(int a,int b) {
    return a * b;
}

float div(int a,int b) {
    return (float)a / b;
}

int rem(int a,int b) {
    return a % b;
}

int square(int a) {
    return a * a;
}

int main() {
    int choice;
    int num1, num2, ans;
    float result;

    while (1) {
        printf("\n\n===== MINI CALCULATOR =====");
        printf("\n 1. Addition");
        printf("\n 2. Subtraction");
        printf("\n 3. Multiplication");
        printf("\n 4. Division");
        printf("\n 5. Remainder");
        printf("\n 6. Square");
        printf("\n 7. Exit");
        printf("\n Enter Your Choice : ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("\n Enter One Number: ");
            scanf("%d", &num1);
        } else if (choice >= 1 && choice <= 5) {
            printf("\n Enter The Value 1: ");
            scanf("%d", &num1);
            printf("\n Enter The Value 2: ");
            scanf("%d", &num2);
        }

        switch (choice) {
            case 1:
                ans = add(num1, num2);
                printf("\n Addition is: %d", ans);
                break;
            case 2:
                ans = sub(num1, num2);
                printf("\n Subtraction is: %d", ans);
                break;
            case 3:
                ans = mul(num1, num2);
                printf("\n Multiplication is: %d", ans);
                break;
            case 4:
                if (num2 != 0) {
                    result = div(num1, num2);
                    printf("\n Division is: %.2f", result);
                } else {
                    printf("\n Error: Cannot divide by zero!");
                }
                break;
            case 5:
                if (num2 != 0) {
                    ans = rem(num1, num2);
                    printf("\n Remainder is: %d", ans);
                } else {
                    printf("\n Error: Cannot divide by zero!");
                }
                break;
            case 6:
                ans = square(num1);
                printf("\n Square of %d is: %d", num1, ans);
                break;
            case 7:
                printf("\n Exiting Calculator...");
                return 0;
            default:
                printf("\n Invalid Choice!");
        }
    }

    return 0;
}
