#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

double calc(double x, double y, double z);

int main()
{
    double x, y, z;
    double result;

    setlocale(LC_ALL, "RUS");

    printf("Введите x: ");
    scanf("%lf", &x);

    printf("Введите y: ");
    scanf("%lf", &y);

    printf("Введите z: ");
    scanf("%lf", &z);

    result = calc(x, y, z);

    printf("Результат v = %.4f\n", result);
    return 0;
}

double calc(double x, double y, double z)
{
    double chisl, znam, p1, p2, v;

    chisl = 1.0 + pow(sin(x + y), 2);
    znam = fabs(x - (2.0 * y) / (1.0 + pow(x, 2) * pow(y, 2)));

    p1 = (chisl / znam) * pow(x, fabs(y));
    p2 = pow(cos(atan(1.0 / z)), 2);

    v = p1 + p2;
    return v;
}
