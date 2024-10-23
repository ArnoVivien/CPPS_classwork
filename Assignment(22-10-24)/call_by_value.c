#include <stdio.h>
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Swapped Values are as, a : %d and b : %d", a, b);
}

main()
{
    int x, y;
    printf("Enter two numbers ( x and y ) : ");
    scanf("%d%d", &x, &y);
    swap(x, y);
}
