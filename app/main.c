/**
 * goldbach - программа для проверки гипотезы Гольдбаха.
 * Copyright (c) 2017, Nika Motina <motina@cs.karelia.ru>
 * This code is licensed under a MIT-style license.
 */

#include <stdio.h>
#include "utils.h"
#define UNUSED(x) (void)(x)

int main()
{
    int n, m;
    UNUSED(scanf("%d %d", &n, &m));
    int i;
    int nprimes[1001];

    calculate_primes(nprimes, m);

    for(i = n; i <= m; i = i + 2) {
    int y1, x1, k;
    k = expand(i, &x1, &y1, nprimes);
    UNUSED(printf("%d %d %d %d\n", i, k, x1, y1));
    }
    return 0;
}
