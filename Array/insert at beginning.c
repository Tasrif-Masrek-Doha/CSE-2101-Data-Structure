#include <stdio.h>

int main()
{
    int a[100], n, i, x;

    printf("Enter the size: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter new element: ");
    scanf("%d", &x);

    for(i = n; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    a[0] = x;
    n++;

    printf("After insertion: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
