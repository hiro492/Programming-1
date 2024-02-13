#include <stdio.h>

// 積分対象の関数
double f(double x) {
    return x * x * x + 2 * x * x + 1/2 * x;  // ここでは x^2 の関数を例として使用します
}

// 台形則による数値積分
double integrate(double a, double b, int n) {
    double h = (b - a) / n;  // 区間の幅
    double sum = 0.0;

    // 台形則を適用して積分を計算
    for (int i = 0; i < n; i++) {
        double x1 = a + i * h;
        double x2 = a + (i + 1) * h;
        sum += (f(x1) + f(x2)) * h / 2.0;
    }

    return sum;
}

int main() {
    double a, b;  // 積分区間 [a, b]
    long long n;        // 分割数

    printf("積分区間 [a, b] の a を入力してください：");
    scanf_s("%lf", &a);
    printf("積分区間 [a, b] の b を入力してください：");
    scanf_s("%lf", &b);
    printf("分割数 n を入力してください：");
    scanf_s("%d", &n);

    // 数値積分の結果を計算
    double result = integrate(a, b, n);

    printf("結果：%.4f\n", result);

    return 0;
}
