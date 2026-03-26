#include <stdio.h>

void num1(int n, int a)
{
    n = n + a;
    printf ("%d\n", n);
}

void num2(int n, int a)
{
    if (a > n)
    {
        a = a - n;
        printf ("%d\n", a);
    }
    else
    {
        n = n - a;
        printf ("%d\n", n);
    }
}

void num3(int n, int a)
{
    n = (n + a) / 2;
    printf ("%d\n", n);
}

void num4(int n, int a)
{
    if (a > n)
    {
        a = a % n;
        printf ("%d\n");
    }
    else
    {
        n = n % a;
        printf("%d\n, n");
    }
}

int main()
{
    num1(10, 5);
    num2(22, 13);
    num3(5, 17);
    num4(4, 8);
}