#include <stdio.h>
#include <tgmath.h>
#include <stdbool.h>

bool prime_check(unsigned long long val);

int main(void)
{
    unsigned long long n = 0;
    printf("Input nth prime number: ");
    scanf("%llu", &n);

    switch (n)
    {
    case 1:
        printf("%d", 2);
        break;
    case 2:
        printf("%d", 3);
        break;
    default:
        break;
    }
    unsigned long long count = 2;
    unsigned long long i = 1;
    unsigned long long val = 0;
    while (count < n)
    {
        val = 6 * i - 1;
        printf("%llu i = %llu count = %llu %d\n", val, i, count, 1);
        count++;
        if (true)
        {
            printf("%llu %llu %llu %d", val, i, count, 1);
            return 0;
        }
        val = 6 * i + 1;
        printf("%llu i = %llu count = %llu %d\n", val, i, count, 2);
        count++;
        i++;
    }
    // printf("%llu %llu %llu %d", val, i, count, 2);
    return 0;
}