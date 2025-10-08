#include <stdio.h>

int main()
{
    // print even from 1 to 100 "0 included" if no "0" then start from 2.
    /* for (int i = 0; i <= 100; i+=2)
    {
        printf("%d\n", i);
    } */

    // print odd from 1 to 100
    /* for (int i = 1; i <= 100; i += 2)
    {
        printf("%d\n", i);
    } */
    // now like need to print like it incriment by 7
    /* for (int i = 7; i <=100; i+=7)
    {
        printf("%d\n", i);
    } */

    // now try to print from 100 to 1
    /* for (int i = 100; i >=1; i--) //just be focus on middle ending logic
    {
        printf("%d\n", i);
    } */
   //suppose need to print "2,4,8,16,32,64"
   for (int i = 2; i <= 64; i*=2)
   {
       printf("%d\n", i);
   }
   

    return 0;
}