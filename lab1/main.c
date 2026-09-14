#include <stdio.h>
#include <math.h>

int main() {
    float    a, b, c;
    float    StartX, EndX, dX;
    float    F;

    printf("Введите:\n");
    printf("\ta = ");       scanf("%f", &a);
    printf("\tb = ");       scanf("%f", &b);
    printf("\tc = ");       scanf("%f", &c);
    printf("\tX нач. = ");  scanf("%f", &StartX);
    printf("\tX кон. = ");  scanf("%f", &EndX);
    printf("\tdX = ");      scanf("%f", &dX);

    for (float x = StartX; x <= EndX; x += dX)
    {
        if (a < 0 && x != 0)
            F = a * (float)pow(x, 2) + (float)pow(b, 2) * x;
        else if (a > 0 && x == 0)
            F = x - (x - a) / (x - c);
        else
            F = 1 + x / c;


        if ((~((long)floor(a) | (long)floor(b)) & ((long)floor(b) | (long)floor(c))) != 0)
            printf("x = %.2f\tF = %.2f\n", x, F);
        else
            printf("x = %.2f\tF = %.0f\n", x, F);
    }

    return 0;
}