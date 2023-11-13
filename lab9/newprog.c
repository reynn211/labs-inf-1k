#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sign(int x) {
    return (x > 0) - (x < 0);
}

int min(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

int max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int mod(int a, int b){
    return a - floor(a / b) * b;
}

int main() {
    int i, j, l, k, hit;
    i = -25;
    j = -9;
    l = -8;
    hit = -1;

    //printf("(%d, %d)\n", i, j);

    for (k = 1; k <= 50; k++) {
        i = mod((abs(i - j) * l - abs(j - l) * i + abs(i - l) * j), 20) - k;
        j = mod(min(i, j) * max(j, l) * min(i, l), 25) + 5 * sign(i) + k;
        l = abs(l) * sign(i - j) - abs(i) * sign(j - l) + abs(j) * sign(i - l);

        //printf("(%d, %d)\n", i, j);

        if ((i + j + 10 >= 0) && (i + j + 20 <= 0)) {
            hit = k;
            break;
        }
    }

    if (hit != -1) {
        printf("попал в %d\n", hit);
    } else {
        printf("промах\n");
    }

    printf("конечные: %d %d %d\n", i, j, l);
    printf("динам. параметр: %d\n", l);

    return 0;
}
