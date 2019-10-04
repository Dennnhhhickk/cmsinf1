#include <stdio.h>
#include <math.h>

int main(void)
{
    long long n, ans = 0, left = 0, right = 0;
    scanf("%lld", &n);
    long long tmp = 1;
    while (n)
    {
        if ((n + 1) % 3 != 1)
        {
            ans++;
            if ((n + 1) % 3 == 0)
                right += tmp;
            else
                left += tmp;
        }
        n = (n + 1) / 3;
        tmp *= 3;
    }
    if (left > 1000000 || right > 1000000)
        printf("-1");
    else
        printf("%lld", ans);
    return 0;
}