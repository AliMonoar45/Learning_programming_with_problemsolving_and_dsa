#include <stdio.h>

int main() {
    int pass = 1999;

    // int inp; //inp is for input
    // note we also can do while(scanf("%d",&inp))
    //{
    // the block which will be executed.
    // }

    while (1)
    {
        int check_pass;
        scanf("%d", &check_pass);
        if (pass==check_pass)
        {
            printf("Correct\n");
            break;
        }else
        {
            printf("Wrong\n");
                }
        
        
    }
    
    return 0;
}