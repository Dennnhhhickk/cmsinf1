#include <stdio.h>
#include <math.h>

#define eps 1e-9
#define ittr 7000000
#define step (M_PI / (2 * ittr))

int main(void)
{
    double a, b, x, y;
    scanf("%lf%lf%lf%lf", &x, &y, &a, &b);
    for (double i = 0.0; M_PI / 2 - i > eps; i += step)
    {
        double tmp1, tmp2;
        tmp1 = a * sin(i) + cos(i) * b;
        tmp2 = a * cos(i) + sin(i) * b;
        if ((tmp1 - x < eps && tmp2 - y < eps) || (tmp2 - x < eps && tmp1 - y < eps))
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}