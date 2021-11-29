#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long result;
long long fibo(int n)
{

    if (n == 1 || n == 2)
    {
        return 1;
    }

    else
    {
        result = fibo(n - 1) + fibo(n - 2);
    }
    return result;
}
int main(int argc, char const *argv[])
{
    int n = atoi(argv[1]);
    if (n == 0)
    {
        printf("%d\n", n);
    }
    else
    {
        result = fibo(n);
        printf("%lld\n", result);
    }
    return 0;
}
