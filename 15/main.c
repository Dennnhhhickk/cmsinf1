#include <stdio.h>

struct Point
{
    long long x, y;
};

struct Vector
{
    long long a, b;
};

struct Vector makeVector(struct Point a, struct Point b)
{
    struct Vector c;
    c.a = b.x - a.x;
    c.b = b.y - a.y;
    return c;
}

long long kos(struct Vector a, struct Vector b)
{
    return a.a * b.b - a.b * b.a;
}

int main(void)
{
    long long n;
    int bol = 1;
    long long ans;
    struct Point p0, p01, p1, p2, p3;
    scanf("%lli", &n);
    scanf("%lli%lli", &p1.x, &p1.y);
    scanf("%lli%lli", &p2.x, &p2.y);
    scanf("%lli%lli", &p3.x, &p3.y);
    p0 = p1;
    p01 = p2;
    ans = kos(makeVector(p2, p1), makeVector(p2, p3));
    for (int i = 3; i < n; i++)
    {
        p1 = p2;
        p2 = p3;
        scanf("%lli%lli", &p3.x, &p3.y);
        if (ans * kos(makeVector(p2, p1), makeVector(p2, p3)) < 0)
            bol = 0;
    }
    if (ans * kos(makeVector(p3, p2), makeVector(p3, p0)) < 0)
        bol = 0;
    if (ans * kos(makeVector(p0, p3), makeVector(p0, p01)) < 0)
        bol = 0;

    if (bol)
        printf("Yes");
    else
        printf("No");
    
    return 0;
}