#include<stdio.h>

int main() {
    int a, b, w, x;
    float c, d, y, z;

    scanf("%d %d", &a, &b);

    w = a + b;
    x = a - b;

    printf("%d %d\n", w, x);

    scanf("%f %f", &c, &d);

    y = c + d;
    z = c - d;

    printf("%.1f %.1f\n", y, z);

    return 0;
}