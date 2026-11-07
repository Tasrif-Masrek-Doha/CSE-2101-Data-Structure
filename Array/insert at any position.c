#include <stdio.h>

int main()
{
    int a[100], n, i, x, pos;

    printf("Enter the size: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter new element: ");
    scanf("%d", &x);

    for(i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = x;
    n++;

    printf("After insertion: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
