#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846

int task0(void);
int task1(void);
int task2(void);
int task3(void);

float count(float x, float y);
double sincalc(double gr);
double resy(double x, double p);
int chkA(int A, int B);
int chkB(int A, int B, int C);

int main(void) {
    setlocale(LC_ALL, ".UTF8");

    task0();
    task1();
    task2();
    task3();

    return 0;
}


int task0(void) {
    float x, y, result;
    
    printf("Задание (пример):\n");
    printf("Введите x и y: ");
    scanf("%f %f", &x, &y);
    
    result = count(x, y);
    
    printf("ответ: %.3f\n", result);
    return 0;
}

int task1(void) {
    double gr, result;
    
    printf("Задание 1: \n");
    printf("Введите число: ");
    scanf("%lf", &gr);

    result = sincalc(gr);

    printf("результат: %.6lf\n", result);
    return 0;
}

int task2(void) {
    double x, p, y;
    p = 0.5; 
    
    printf("Задание 2: \n");
    printf("Введите значение x: ");
    scanf("%lf", &x);

    y = resy(x, p);
    
    printf("При x = %.1lf значение функции y = %.4lf\n", x, y);
    return 0;
}

int task3(void) {
    double x, p, a, b, y;
    int A, B, C, varA, varB;
    p = 0.5; 
    
    printf("Задание 3: \n");
    printf("Введите значение x: ");
    scanf("%lf", &x);

    b = exp(sqrt(fabs(x)));
    a = log(pow(p, 2) + pow(x, 3));

    y = resy(x, p);
    
    A = (int)a;
    B = (int)b;
    C = (int)y;
    
    printf("Целые части: A = %d, B = %d, C = %d\n", A, B, C);
    

    varA = chkA(A, B);
    printf("Условие А выполнено (1 - да, 0 - нет): %d\n", varA);
    
    varB = chkB(A, B, C);
    printf("Условие Б выполнено (1 - да, 0 - нет): %d\n", varB);
    return 0;
}

float count(float x, float y) {
    return sin(pow(x, 0.5f * y)) + pow(y + 8e-4f, 1 / 5.f);
}

double sincalc(double gr) {
    double rad = gr * M_PI / 180.0;
    return sin(rad);
}

double resy(double x, double p) {
    double a, b;
    b = exp(sqrt(fabs(x)));
    a = log(pow(p, 2) + pow(x, 3));
    return pow(a, 3) / pow(b, 2);
}

int chkA(int A, int B) {
    return (A % 2) != (B % 2);
}

int chkB(int A, int B, int C) {
    return (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
}