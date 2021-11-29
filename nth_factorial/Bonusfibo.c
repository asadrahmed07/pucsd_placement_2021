#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long result;

int main(int argc, char const *argv[])
{
    int n = atoi(argv[1]);
    long long n1 = 1, n2 = 1;
    long long x = n1 + n2;
    if (n == 0)
    {
        printf("%d\n", n);
    }
    int i = 2;
    while (i <= n)
    {
        n1 = n2;
        n2 = x;
        x = n1 + n2;
        if (x % 2 == 0)
        {
            i++;
        }
    }

    printf("%lld\n", x);

    return 0;
}
