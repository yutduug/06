#include <stdio.h>

int get_integer()
{
    int n;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    return n;
}

int factorial(int n)
{
    int res = 1;
    int i;

    for (i = 1; i <= n; i++)
        res = res * i;

    return res;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int main(void)
{
    int n;
    int r;
    int result;

    printf("n을 입력하세요: ");
    n = get_integer();

    printf("r을 입력하세요: ");
    r = get_integer();

    result = combination(n, r);

    printf("C(%d, %d) = %d\n", n, r, result);

    return 0;
}