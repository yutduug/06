#include <stdio.h>

// 두 정수를 더하는 함수
int sumTwo(int a, int b)
{
    return a + b;
}

// 정수의 제곱을 계산하는 함수
int square(int n)
{
    return n * n;
}

// 두 정수 중 큰 수를 구하는 함수
int get_max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main(void)
{
    int result;

    result = sumTwo(10, 20);
    printf("sumTwo = %d\n", result);

    result = square(5);
    printf("square = %d\n", result);

    result = get_max(10, 20);
    printf("get_max = %d\n", result);

    return 0;
}