//Pyramid With Digit  
/*              1
               1 2
              1 2 3
*/
#include <stdio.h>

int main()
{
    int row , col , n , spc , k ;
    printf("Enter your value for n please \n");
    scanf("%d" , &n);

    spc = (n + 4) - 1;
    printf("Value of n is %d \n" , n);
    printf("Your pattern looks like this\n");
    for(row = 1 ; row <= n ; row++)
    {
        for(k = spc ; k >= 1 ; k--)
        {
             printf(" ");
        }
            for(col = 1 ; col <= row ; col++)
            {
                printf("%d " , col);
            }
        printf("\n");
        spc--;
    }
    return 0;
}
    // This the END of this program.
    // Thank You.

//Pyramid With Digit   02  
/*              1
               2 2
              3 3 3
*/
#include <stdio.h>

int main()
{
    int row , col , n , spc , k ;
    printf("Enter your value for n please \n");
    scanf("%d" , &n);

    spc = (n + 4) - 1;
    printf("Value of n is %d \n" , n);
    printf("Your pattern looks like this\n");
    for(row = 1 ; row <= n ; row++)
    {
        for(k = spc ; k >= 1 ; k--)
        {
             printf(" ");
        }
            for(col = 1 ; col <= row ; col++)
            {
                printf("%d " , row);
            }
        printf("\n");
        spc--;
    }
    return 0;
}
    // This the END of this program.
    // Thank You.

//Pyramid Digit 03
/*              1
               2 3
              4 5 6
*/
#include <stdio.h>

int main()
{
    int row , col , n , spc , k , t = 1;
    printf("Enter your value for n please \n");
    scanf("%d" , &n);

    spc = (n + 4) - 1;
    printf("Value of n is %d \n" , n);
    printf("Your pattern looks like this\n");
    for(row = 1 ; row <= n ; row++)
    {
        for(k = spc ; k >= 1 ; k--)
        {
             printf(" ");
        }
            for(col = 1 ; col <= row ; col++)
            {
                printf("%d " , t++);
            }
        printf("\n");
        spc--;
    }
    return 0;
}
    // This the END of this program.
    // Thank You.


//Triangle at risk 01  
/*    *
      **
      ***
*/
#include<stdio.h>

int main()
{
    int row , col , n ;
    printf("Enter your value for n please \n");
    scanf("%d" , &n);

    printf("Value of n is %d\n", n);
    printf("Your pattern is looks like this\n");
    for (row = 1 ; row <= n ; row++)
    {
        for (col = 1 ; col <= row ; col++)
            {
                printf("*");
            }
        printf("\n");
    }
    return 0;
}
 // This is the END of this program.
 // Thank You.

//Triangle at risk 02
/*  ***
    **
    *
*/
#include <stdio.h>

int main ()
{
    int row , col , n ;
    printf("Enter the value for n please \n");
    scanf("%d" , &n);

    printf("Value of n is %d\n" , n);
    printf ("Your pattern is looks like this\n");
    for (row = 1 ; row <= n ; row++)
    {
        for (col = row ; col <= n ; col++)
        {
            printf ("*");
        }
      printf("\n");
    }
    return 0;
}
 // This the END of this program.
 // Thank You.

//Triangle at Risk  Part  03  
/*     *
      **
     ***
*/
#include <stdio.h>

int main()
{
    int row , col , n ;
    printf ("Enter your value for n please \n");
    scanf ("%d" , &n);

    printf ( "Value of n is %d\n" , n);
    printf ("Your pattern is looks like this\n");
    for (row = 1 ; row <= n ; row++)
    {
        for (col = 1 ; col <= n - row ; col++)
        {
            printf (" ");
        }
            for (col = 1 ; col <= row ; col++)
            {
                printf ("*");
            }
      printf ("\n");
    }
    return 0;
}
 // This is the End of this program.
 // Thank You.

//Triangle at risk part  04
///*  ***
     **
      *
*/
#include <stdio.h>

int main()
{
  int row , col , n ;
  printf("Enter your value for n please \n");
  scanf("%d" , &n);

  printf("Value of n is %d\n" , n);
  printf("Your pattern is looks like this\n");
  for(row = 1 ; row <= n ; row++)
  {
      for(col = 1 ; col <= row - 1 ; col++)
      {
         printf(" ");
      }
            for(col = row ; col <= n ; col++)
                {
                    printf("*");
                }
    printf("\n");
  }
  return 0;
}
    // This the END of this program.
    // Thank You.

//Triangle at part 05
/*              *
               * *
              * * *
*/
#include <stdio.h>

int main()
{
    int row , col , n , spc , k ;
    printf("Enter your value for n please \n");
    scanf("%d" , &n);

    spc = (n + 4) - 1;
    printf("Value of n is %d \n" , n);
    printf("Your pattern looks like this\n");
    for(row = 1 ; row <= n ; row++)
    {
        for(k = spc ; k >= 1 ; k--)
        {
             printf(" ");
        }
            for(col = 1 ; col <= row ; col++)
            {
                printf("* ");
            }
        printf("\n");
        spc--;
    }
    return 0;
}
    // This the END of this program.
    // Thank You.

//Triangle  with digit  
/*    1
      22
      333
*/
#include<stdio.h>

int main()
{
    int row , col , n , t = 1;
    printf("Enter your value for n please \n");
    scanf("%d" , &n);

    printf("Value of n is %d\n", n);
    printf("Your pattern is looks like this\n");
    for (row = 1 ; row <= n ; row++)
    {
        for (col = 1 ; col <= row ; col++)
            {
                printf("%d" , row);
            }
        printf("\n");
    }
    return 0;
}
 // This is the END of this program.
 // Thank You.

//Triangle digit  
/*    1
      23
      456
*/
#include<stdio.h>

int main()
{
    int row , col , n , t = 1;
    printf("Enter your value for n please \n");
    scanf("%d" , &n);

    printf("Value of n is %d\n", n);
    printf("Your pattern is looks like this\n");
    for (row = 1 ; row <= n ; row++)
    {
        for (col = 1 ; col <= row ; col++)
            {
                printf("%d" , t++);
            }
        printf("\n");
    }
    return 0;
}
 // This is the END of this program.
 // Thank You.


