#include <stdio.h>

int main(void)
{
    int n, mn, mx, data;
    scanf("%d", &n);
    scanf("%d", &mn);
    mx = mn;
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &data);
        if (data < mn)
            mn = data;
        if (data > mx)
            mx = data;
    }
    printf("%d", mx - mn);
    return 0;
}