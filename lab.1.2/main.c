#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int option;
    double X1, X2, delta;
    unsigned int N;
    printf("��������: f(x) = 0.25x ^ 5 + 4 * (x + 20) ^ 4 - 2x\n");
    printf("������� ����� �������� ���������� �����:\n");
    printf("1. ������ X1, X2 � N\n");
    printf("2. ������ X1, X2 � delta\n");
    printf("��� ����: ");
    scanf("%d", &option);
    printf("\n");

    if (option == 1) {
        printf("������ X1: ");
        scanf("%lf", &X1);
        printf("������ X2: ");
        scanf("%lf", &X2);
        printf("������ N: ");
        scanf("%u", &N);
        delta = (X2 - X1) / (N - 1);
    } else if (option == 2) {
        printf("������ X1: ");
        scanf("%lf", &X1);
        printf("������ X2: ");
        scanf("%lf", &X2);
        printf("������ delta: ");
        scanf("%lf", &delta);
        N = (unsigned int)((X2 - X1) / delta) + 1;
    }
    else if (option == 4){
        printf("test4");
        return 1;

    }
    else if (option!=8){
        printf("test8");
    }
    else {
        printf("������������ ���� �����.\n");
    }



    printf("X1: %lf, X2: %lf, delta: %lf, N: %u\n\n", X1, X2, delta, N);
    printf("������� ������� �������:\n\n");
    printf("******************************************************\n");
    printf("*  N  *         X          *             F(x)        *\n");
    printf("******************************************************\n");

    for (unsigned int i = 0; i < N; i++) {
        double x = X1 + i * delta;
        double result = 0.25 * pow(x, 5) + 4 * pow(x + 20, 4) - 2 * x;
        printf("------------------------------------------------------\n");
        printf("|%-5d|%-20lf|%-25lf|\n", i, x, result);


        // ������� ��������� ��� ��������� ������
        if ((i + 1) % 10 == 0) {
            printf("��� ����������� �������� ����-��� ������...");
            getchar(); // ���������� ���������� ������
        }
    }

    return 0;
}

