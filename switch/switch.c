#include <stdio.h>
int main()
{

    int num1,num2,result;
    char op;
    printf("enter first number :");
    scanf("%d", &num1);
    printf("enter second number :");
    scanf("%d", &num2);
    printf("select the operation (+,-,*,/) :");
    scanf(" %c",&op);
    switch (op)
    {
    case '+':
        result=num1+num2;
        printf("the sum is %d ",result);
        break;
    case '-':
        result=num1-num2;
        printf("the sum is %d ",result);
        break;
    case '*':
        result=num1*num2;
        printf("the sum is %d ",result);
        break;
    case '/':
        result=num1/num2;
        printf("the sum is %d ",result);
        break;
   
    default:
        printf("invalid operation");
    }
}
