#include <stdio.h>
#include <math.h>

// 1. No arguments, no return
void checkEvenOdd1()
{
    int num;
    printf("Enter a number (1): ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Even number\n");
    else
        printf("Odd number\n");
}

// 2. With arguments, no return
void checkEvenOdd2(int num)
{
    printf("You entered (2): %d — ", num);
    if (num % 2 == 0)
        printf("Even number\n");
    else
        printf("Odd number\n");
}

// 3. No arguments, returns value
int checkEvenOdd3()
{
    int num;
    printf("Enter a number (3): ");
    scanf("%d", &num);
    return num % 2 == 0;
}

// 4. With arguments, returns value
int isEven(int num)
{
    return num % 2 == 0;
}

int main()
{
    // Function 1
    checkEvenOdd1();

    // Function 2
    int n2;
    printf("Enter a number (2): ");
    scanf("%d", &n2);
    checkEvenOdd2(n2);

    // Function 3
    int result3 = checkEvenOdd3();
    printf("Result (3): %s\n", result3 ? "Even" : "Odd");

    // Function 4
    int n4;
    printf("Enter a number (4): ");
    scanf("%d", &n4);
    printf("Result (4): %s\n", isEven(n4) ? "Even" : "Odd");

    // Math function practice
    double x = -9.7;
    printf("\nMath Function Practice:\n");
    printf("sqrt(16) = %.2f\n", sqrt(16));
    printf("pow(2, 5) = %.2f\n", pow(2, 5));
    printf("abs(-10) = %d\n", abs(-10));
    printf("ceil(%.2f) = %.2f\n", x, ceil(x));
    printf("floor(%.2f) = %.2f\n", x, floor(x));
    printf("fmod(10.5, 3.0) = %.2f\n", fmod(10.5, 3.0));

    return 0;
}
