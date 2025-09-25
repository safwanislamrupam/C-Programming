//Convert to Farenheit from Celcuis
#include<stdio.h>
int main()
{
    float farn,cels;

    printf("Enter Farenheit  = ");
    scanf("%f",&farn);

    cels = (5* farn - 160)/9;

    printf("Celcuis = %.2f\n",cels);


}
