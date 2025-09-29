//Aritmetic Operator  
#include<stdio.h>
int main()
{
    int a,b,div,sum,sub,mul;
    printf("Enter a  = ");
    scanf("%d",&a);
    printf("Enter b  = ");
    scanf("%d",&b);
    div  =  a / b;
    sum  =  a + b;
    mul  =  a * b;
    sub  =  a - b;
    printf("%d / %d = %d\n",a,b,div);
    printf("%d + %d = %d\n",a,b,sum);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%d * %d = %d\n",a,b,mul);

}
//Assignment Opearator  
#include<stdio.h>
int main()
{
     float a = 5;  
     a+=2;  // a =  a  + 2 (for addition)
    printf("%f\n",a);  

    a-=2; // a =  a  - 2 (for subtraction)
    printf("%f\n",a);

    a*=2; // a =  a  * 2 (for multipication)
    printf("%f\n",a);

    a/=2; // a =  a  / 2 (for division)
    printf("%f\n",a);


}



//Unary Operator  
#include<stdio.h>
int main()
{
     int x  = 10;  
    printf("%d\n",x++); //x=10  [this is the pre-increment]  
     printf("%d\n",x; //x=11  
     printf("%d\n",++x); //x=12  [this is the post-decrement]  
     printf("%d\n",x); //x=12  
     printf("%d\n",x--); //x=12 [this is the post-decrement]  
     printf("%d\n",--x); //x=10 [this is the pre-decrement]  
    
    
}


//Relational Operator

//// find largest numer of 3 numbers
#include <stdio.h>
int main()
{

    int number1, number2, number3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);
    if (number1 > number2 && number1 > number3)
    {
        printf("%d is the largest number\n", number1);
    }
    else if (number2 > number1 && number2 > number3)
    {
        printf("%d is the largest number\n", number2);
    }
    else if (number3 > number1 && number3 > number2)
    {
        printf("%d is the largest number\n", number3);
    }
    else
    {
        printf("Both numbers are equal\n");
    }
    return 0;
}


//  // check a year is a leap year or not
#include <stdio.h>
int main()
{

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}
