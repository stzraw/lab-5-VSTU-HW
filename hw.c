#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

double calc(double x, double y, double z);

int main()
{
    setlocale(LC_ALL, ".UTF8");

    double x,y,z, result;
    x = 3.74e-2;  // 3.74 * 10^-2
    y = -0.825;
    z = 0.16e2;   // 0.16 * 10^2
    result = calc(x, y, z);
    
    printf("Тестовый результат v = %.4lf\n", result);
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
