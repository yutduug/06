#include <stdio.h>

void func(int x)
{
    printf("func x = %d\n", x);
    printf("func x is at %p\n", &x);
}

int main(void)
{
    int x = 10;

    printf("main x = %d\n", x);
    printf("main x is at %p\n", &x);

    func(x);

    return 0;
}