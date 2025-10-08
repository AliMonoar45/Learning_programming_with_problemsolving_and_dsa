/*
5 Marks for good hand writing
Time Limit: 1 Seconds

Memory Limit: 2.93 MB

Statement
In this problem you will be given an integer number N. You will have to add 5 with N and print it.

Constraints
- 1 <= N  <= 100

Input format
Input consists of an integer number N.
Output Format
Output the result after adding 5 with N.
Sample Input 1
100
Sample Output 1
105
*/
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    printf("%d", N + 5);

    return 0;
}