#include <stdio.h>

int main()
{
    int a[100], n, i, pos;

    printf("Enter the size: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    printf("After deletion: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
