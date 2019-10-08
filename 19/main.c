#include <stdio.h>

long long bit(long long a, long long i)
{
    return (a & (1<<i))>>i;
}

int main(void)
{
    long long a, b, c, d, x, y, ans1 = 0, ans2 = 0;
    scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &x, &y);
    for (long long i = 0; i < 32; i++)
    {
        long long bol = 1;
        for (long long f = 0; f < 2 && bol; f++)
            for (long long s = 0; s < 2 && bol; s++)
            {
                if ((long long)((bit(a, i) & f) ^ (bit(b, i) & s)) == bit(x, i) && (long long)((bit(c, i) & f) ^ (bit(d, i) & s)) == bit(y, i))
                {
                    ans1 += f << i;
                    ans2 += s << i;
                    bol = 0;
                }
            }
        if (bol)
            return printf("No"), 0;
    }
    printf("Yes\n%lld %lld", ans1, ans2);
    return 0;
}