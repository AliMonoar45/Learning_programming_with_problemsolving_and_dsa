#include <stdio.h>

int main() {
    for (int i = 0; i < 20; i++)
    {
        if (i==0||i==2||i==5)
        {
            continue;
        }
        printf("%d\n", i);
        
    }
    
    return 0;
}

/* 
continue is a very importent operation in programming if we want to skip certain block or step in loop we can use continue keyword.
where continue apply bellow that everything will be skip in that specific block.
*/
