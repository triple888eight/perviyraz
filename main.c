#include <stdio.h>

int main()
{
    int a, b, c, m;
    printf("Enter two integer numbers:");
    scanf("%d %d", a, b);
    c=a+b;
    m=a-b;
    printf("a+b=%d\na-b=%d", c, m);
    return 0;
}