//step 6
#include <stdio.h>

int main()
{
    int firstNum, secondNum;
    char operand;

    printf("Enter first number:");
    scanf("%d",&firstNum);

    printf("Enter second number:");
    scanf("%d",&secondNum);

    printf("Enter an operand:");
    scanf("%c",&operand);

    switch (operand)
    {
        case '+':
            printf("%d",firstNum + secondNum);
            break;
        case '-':
            printf("%d",firstNum - secondNum);
            break;
        case '*':
            printf("%d",firstNum * secondNum);
            break;
        case '/':
            printf("%d",firstNum / secondNum);
            break;
        case '%':
            printf("%d",firstNum % secondNum);
            break;
    
    }
    return 0;
}