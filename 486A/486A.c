#include <stdio.h>

int main() {
    long long n;

    scanf("%lld", &n);

    long long even_count = n / 2;
    long long sum_even = even_count * (even_count + 1);

    long long odd_count = (n + 1) / 2;
    long long sum_odd = odd_count * odd_count;

    long long result = sum_even - sum_odd;

    printf("%lld\n", result);

    return 0;
}