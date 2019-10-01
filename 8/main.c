#include <stdio.h>

int main(void)
{
    unsigned int n, k, ans = 0;
    scanf("%d%d", &n, &k);
    unsigned int mask = ((1<<k) - 1);
    for (int i = 0; i + k <= 32; i++)
    {
        if (((n & mask)>>i) > ans)
            ans = (n & mask) >> i;
        mask = mask << 1;
    }
    printf("%d", ans);
    return 0;
}