#include <stdio.h>

int main(void)
{
    int ans = 0, ind = 0, data;
    while (1)
    {
        scanf("%d", &data);
        if (data == 0)
            break;
        if (ind == 0)
            ans = 0;
    }
    return 0;
}