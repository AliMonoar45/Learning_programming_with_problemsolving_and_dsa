#include <stdio.h>

int main()
{
    for (size_t i = 0; i < 100; i++)
    {
        if (i == 10)
            break;
        printf("%d\n", i);
    }

    return 0;
}

/*
"break" is a very importent keyword it basically used for exit or terminate block of codes when match or apply according to condition.
The break statement can be used within any loop construct to exit the loop based on a specific condition.

#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Exit the loop when i is 5
        }
        printf("%d ", i);
    }
    printf("\nLoop finished.\n");
    return 0;
}
*/