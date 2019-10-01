#include <stdio.h>

void swap(int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp;
} 

int main(void)
{
    int n, mn1, mn2, mn3, data;
    scanf("%d", &n);
    scanf("%d%d%d", &mn1, &mn2, &mn3);
    if (mn1 < mn2)
        swap(&mn1, &mn2);
    if (mn1 < mn3)
        swap(&mn1, &mn3);
    if (mn2 < mn3)
        swap(&mn2, &mn3);

    for (int i = 3; i < n; i++)
    {
        scanf("%d", &data);
        if (data > mn1)
        {
            mn3 = mn2;
            mn2 = mn1;
            mn1 = data;
        }
        else
            if (data > mn2)
            {
                mn3 = mn2;
                mn2 = data;
            }
            else
                if (data > mn3)
                    mn3 = data;
    }
    printf("%d %d %d", mn1, mn2, mn3);
    return 0;
}