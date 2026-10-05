#include <stdio.h>

int main()
{
    int a[] = {1, 2, 4, 5, 6};
    int n = 6;
    int i, x = 0;

    for (i = 1; i <= n; i++)
    {
        x = x ^ i;
    }

    for (i = 0; i < n - 1; i++)
    {
        x = x ^ a[i];
    }

    printf("Missing number = %d", x);

    return 0;
}
