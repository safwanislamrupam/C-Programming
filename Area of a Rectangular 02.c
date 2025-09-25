#include<stdio.h>
int main()
{
    float Length,Width,Area;
    printf("Enter Length = ");
    scanf("%f",&Length);
    printf("Enter Width = ");
    scanf("%f",&Width);
    Area = Length * Width;

    printf("Area Of a Rectangle = %.2f\n",Area);

}
