#include <stdio.h>
void inverter(int v[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = v[i];
        v[i] = v[n - i - 1];
        v[n - i - 1] = temp;
    }
}


int main() {
    int v[] = {4, 9, 10, 8, 6};
    int n = 5;
    inverter(v, n);
    printf("v invertido: [");
    for (int i = 0; i < n; i++) {
        printf("%d%s", v[i], i == n - 1 ? "]\n" : ", ");
    }

    return 0;
}
