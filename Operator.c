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
