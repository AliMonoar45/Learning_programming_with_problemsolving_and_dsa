#include <stdio.h>

int main()
{
    /* for (int i = 0; i < 5; i++)
    {
        printf("hello world\n");
    }
 */
    for (int i = 1; i <= 100; i++)
    {
        printf("%d\n",i);
    }
    

    return 0;
}

/*
 Loops in c:
 there are mainly 3 tyeps of general loops in c "for , while, do while"
 1. for loop
        syntex : "for(start;end condation; step/incriment/decriment)
                        {
                            "codes that will be execuated besed on condition"
                        }"
        example : "for (int i = 0; i < 5; i++)
                    {
                        printf("hello world\n");
                    }"
        output : "  hello world
                    hello world
                    hello world
                    hello world
                    hello world 
                    "
 */