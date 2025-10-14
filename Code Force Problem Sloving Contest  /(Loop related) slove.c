//B - Even Numbers
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n == 1)
    {
        printf("-1");
    }
     for(int i  = 1; i<=n;i++)
     {
           if(i % 2 == 0)
           {
               printf("%d\n",i);
           }

     }


}

//C-Even, Odd, Positive and Negative
#include <stdio.h>
int main()
{
    int n;
    int x;
    int even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);
    for (int i=1; i<=n;i++)
    {
        scanf("%d",&x);
        if (x%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (x > 0)
        {
            pos++;
        }

        else if (x < 0)
        {
            neg++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
}

//D- Fixed Password  
#include<stdio.h>  
int main()
{
     int pass;  
     while(scanf("%d",&pass))  
     {  
          if(pass == 1999)
          {

                printf("Correct\n");
                break; 
          }
          else
           {
                printf("Wrong\n");

           }

     }
}

//E-MEX 
#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        int val;
        scanf("%d", &val);
        if (val > mx)
        {
            mx = val;
        }
    }
    printf("%d\n", mx);
    return 0;
}

//F-Multiplication table
#include<stdio.h>  
int main()
{
     int n;  
     scanf("%d",&n); 
     for(int i = 1; i <= 12 ; i++)
     {
        printf("%d * %d = %d\n",n,i,n*i);
     }

}

//Q-Digits  
#include<stdio.h>  
int main()
{

     int t;  
     scanf("%d",&t);  
     for(int i = 1; i<=t; i++)
     {
         int n;  
         scanf("%d",&n);
         
         while(n!=0)
         {
              printf("%d ",n%10);  
              n /=10;  

         }
                 printf("\n");       

     }
                 return 0;

}
