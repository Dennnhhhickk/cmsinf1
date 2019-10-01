#include <stdio.h>

int main(void)
{
    int n, mx, data, ans = 1;
    scanf("%d", &n);
    scanf("%d", &mx);
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &data);
        if (data == mx)
            ans++;
        else
            if (data > mx)
            {
                mx = data;
                ans = 1;
            }
    }
    printf("%d", ans);
    return 0;
}