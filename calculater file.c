/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

int main()
    {   start:;
        float a,b,c;
        char operator;
        printf("\nEnter an expression with one operator and two operands, each seperated by a space: ");
        scanf("%f %c %f", &a, &operator, &b);
        if (operator=='+')
            {c=a+b; printf("\n\n%f+%f=%f",a,b,c);}
        else if (operator=='-')
            {c=a-b; printf("\n\n%f-%f=%f",a,b,c);}
        else if (operator=='*')
            {c=a*b; printf("\n\n%f*%f=%f",a,b,c);}
        else if (operator=='/')
            {c=a/b; printf("\n\n%f/%f=%f",a,b,c);}
        else if (operator=='%')
            {int a,b,c; c=a%b; printf("\n\n%f%c%f=%f",a,'%',b,c);}
        else {printf("INVALID INPUT!!");}
        goto start;
        return 0;
    }

