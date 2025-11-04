//Star  
#include<stdio.h>  
int main()
{
     int n,star =1;  
     scanf("%d",&n);  

     for(int i  =1; i<=n;i++)
     {
        for(int j =1; j<=star;j++)
        {
            printf("*");
        }

        printf("\n");  
        star++;
     }

}

//Reverse Star  
#include<stdio.h>
int main()
{
      int n;  
      scanf("%d",&n);  
      int star  = n;  
      for(int i =1; i<=n; i++)
      {
         for(int j =1; j<=star; j++)
         {
            printf("*");
         }       
         printf("\n");
         star--;
   

      }
    
}


//Vaule of Pattern  
#include<stdio.h>  
int main()
{
     int n; 
     scanf("%d",&n); 
     int val =1;  
     int space = n-1;  
     for(int i=1;i<=n;i++)
     {
        for(int j =1;j<=space;j++)
    {
           printf(" ");
    }

       for(int j=1;j<=val;j++)
       {
           printf("%d ",j);
       }

         printf("\n");  
         val++;
         space--;


     }
    

}

//sum of vaule  

#include<stdio.h>  
int main()
{
      int n;  
      scanf("%d",&n); 
      int a[n];
      for(int i=0;i<=n;i++)
      {
        scanf("%d",&a[i]);
      }

      int x;  
      scanf("%d",&x);

      for(int i  = 0; i<=n;i++)
      {
          for(int j = i + 1; j <n; j++)
          {
            printf("%d %d\n", a[i], a[j]);
          }
      }
   
}

//pyramid pattern  
#include<stdio.h>  
int main()
{
    int n;  
    scanf("%d",&n);  
    int star = 1;
    int space = n-1;

     for(int i=1;i<=n;i++)
     {
        for(int j =1;j<=space;j++)
        {
            printf(" ");
        }

        for(int j=1;j<=star;j++)
        {
            printf("*");
        }

        printf("\n");
        star += 2;  
        space--;

     } 

}

//flag
#include<stdio.h>  
int main()
{
   int n;  
   scanf("%d",&n);  
   int a[n];  

   for(int i = 0 ; i<n; i++)
   {
    scanf("%d",&a[i]);
   }
   int x;  
   scanf("%d",&x);  
    
   int flag = 0;  
   for(int i =0;i<n-1;i++)
   {
     for(int j = i+1;j<n;j++)
     {
        if(a[i] + a[j] == x)
        {
            flag = 1;  
            printf("%d %d\n",a[i],a[j]); 

        }
     }
   }

   if(flag == 0)
   {
      printf("No\n");
   }




}

//Selection Sort  
#include<stdio.h>  
int main()
{
   int n;  
   scanf("%d",&n);  
   int a[n];  

   for(int i = 0 ; i<n; i++)
   {
    scanf("%d",&a[i]);
   }
   
   for(int i =0;i<n-1;i++)
   {
     for(int j = i+1;j<n;j++)
     {
        if(a[i] < a[j])
        {
               int temp = a[i];  
               a[i] = a[j]; 
               a[j] = temp;
        }
     }
   }

     for(int i =0; i<n; i++)
     {
        printf("%d ",a[i]);
     }
   

}