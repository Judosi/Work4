#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
    setlocale(LC_ALL, "RUS");

    //1 
    char c;
    int i;
    float f;
    double d;
    printf("������� ����:");
    scanf("%c", &c);
    printf("������� ����� �����:");
    scanf("%d", &i);
    printf("������� ������� ����� � ������ e:");
    scanf("%le", &d);
    printf("������� ������� �����:");
    scanf("%f", &f);
    printf("c = %c, i = %d, f = %f, d = %e\n", c, i, f, d);

    // 1a
    printf("����� ����� f - %d\n", (int)f);
    printf("������� ����� f - %f\n", f - (int)f);

    // 1b
    printf("��� ������� c - %d\n", (int)c);

    // 1c
    printf("���������� ����� i - %d\n", i);

    // 2
    int a = 11, b = 3;
    int x = a / b;
    float y = a / b;
    double z = a / b;
    printf("x = %d, y = %f, z = %lf\n", x, y, z);

    printf("(float)a/b = %f, (double)a/b = %lf\n", (float)(a / b), (double)(a / b));

    // 3
    int n;
    puts("������� ��������� ������������� ��������:");
    scanf("%d", &n);
    printf("��������� ����� - %d, ������ - %d, ����� ����� - %d", n % 10, n / 100, (n % 10) + (n / 100) + ((n % 100) / 10));
}