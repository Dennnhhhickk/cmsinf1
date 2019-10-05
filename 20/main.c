#include <stdio.h>
#include <math.h>

#define sqr(a) ((a) * (a))
#define eps 1e-10
#define ittr 2048

void swap(double *a, double *b)
{
    double tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    double a, b, c, d;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    if (a < b)
        swap(&a, &b);
    if (c < d)
        swap(&c, &d);
    if (a >= c) 
    {
        if (b >= d) 
            printf("YES"); 
        else 
            printf("NO"); 
        return 0;
    }
    double l = 0, r = 1, m;
    for (int i = 0; i < ittr; i++)
    {
        m = (l + r) / 2.0;
        if (sqrt(1 - sqr(m)) * c + m * d <= b)
            r = m;
        else
            l = m;
    }
    if (l * c + sqrt(1 - sqr(l)) * d <= a)
        printf("YES");
    else
        printf("NO");
    return 0;
}