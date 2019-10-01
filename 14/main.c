#include <stdio.h>

int main(void)
{
    long long n, mn1, mn2, mx1, mx2, data, a, b;
    scanf("%lli", &n);
    scanf("%lli%lli", &a, &b);

    if (a > b)
    {
        mn2 = mx1 = a;
        mn1 = mx2 = b;
    }
    else
    {
        mn2 = mx1 = b;
        mn1 = mx2 = a;
    }

    for (int i = 2; i < n; i++)
    {
        scanf("%lli", &data);
        if (data > mx1)
        {
            mx2 = mx1;
            mx1 = data;
        }
        else
            if (data > mx2)
                mx2 = data;
        if (data < mn1)
        {
            mn2 = mn1;
            mn1 = data;
        }
        else
            if (data < mn2)
                mn2 = data;
    }

    if (mn1 * mn2 == mx1 * mx2)
        if (mn1 + mn2 < mx1 + mx2)
            printf("%lli %lli", mn1, mn2);
        else
            printf("%lli %lli", mx2, mx1);
    else
        if (mn1 * mn2 > mx1 * mx2)
            printf("%lli %lli", mn1, mn2);
        else
            printf("%lli %lli", mx2, mx1);

    return 0;
}