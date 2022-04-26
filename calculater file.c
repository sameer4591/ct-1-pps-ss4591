

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

