#include <stdio.h>

// �ϕ��Ώۂ̊֐�
double f(double x) {
    return x * x * x + 2 * x * x + 1/2 * x;  // �����ł� x^2 �̊֐����Ƃ��Ďg�p���܂�
}

// ��`���ɂ�鐔�l�ϕ�
double integrate(double a, double b, int n) {
    double h = (b - a) / n;  // ��Ԃ̕�
    double sum = 0.0;

    // ��`����K�p���Đϕ����v�Z
    for (int i = 0; i < n; i++) {
        double x1 = a + i * h;
        double x2 = a + (i + 1) * h;
        sum += (f(x1) + f(x2)) * h / 2.0;
    }

    return sum;
}

int main() {
    double a, b;  // �ϕ���� [a, b]
    long long n;        // ������

    printf("�ϕ���� [a, b] �� a ����͂��Ă��������F");
    scanf_s("%lf", &a);
    printf("�ϕ���� [a, b] �� b ����͂��Ă��������F");
    scanf_s("%lf", &b);
    printf("������ n ����͂��Ă��������F");
    scanf_s("%d", &n);

    // ���l�ϕ��̌��ʂ��v�Z
    double result = integrate(a, b, n);

    printf("���ʁF%.4f\n", result);

    return 0;
}
