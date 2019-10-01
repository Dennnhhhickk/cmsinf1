#include <stdio.h>

int main(void)
{
    int n, ans = 0, tmp = 1, data, lst;
    scanf("%d", &n);
    scanf("%d", &lst);
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &data);
        if (data > lst)
            tmp++;
        else
        {
            if (tmp > ans)
                ans = tmp;
            tmp = 1;
        }
        lst = data;
    }
    if (tmp > ans)
        ans = tmp;
    printf("%d", ans);
    return 0;
}