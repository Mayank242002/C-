/* Read input from STDIN. Print your output to STDOUT*/
#include <stdio.h>
#include <limits.h>

int smallestprime(int a, int b)
{
    int j;
    int smallest = INT_MAX, count;
    for (int i = a; i <= b; i++)
    {
        count = 0;
        for (j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 1)
        {
            if (i < smallest)
                smallest = i;
        }
    }
    if (smallest == INT_MAX)
        return 0;
    else
        return smallest;
}
int largestprime(int a, int b)
{
    int j;
    int largest = INT_MIN, count;
    for (int i = a; i <= b; i++)
    {
        count = 0;
        for (j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 1)
        {
            if (i > largest)
                largest = i;
        }
    }
    if (largest == INT_MIN)
        return -1;
    else
        return largest;
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        int smallprime = smallestprime(a, b), largeprime = largestprime(a, b);

        printf("%d\n", largeprime - smallprime);
    }
    return 0;
}