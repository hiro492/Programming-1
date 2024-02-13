#include<stdio.h>
int main() {
    int D, L, distance, count;
    count = 1;
    scanf("%d %d", &D, &L);
    printf("%d", D / L + D % L);
    return 0;
}