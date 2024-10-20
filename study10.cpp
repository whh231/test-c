
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void sa(int*x, int*y) {
    if (*x < *y) {
        int tep = *x;
        *x = *y;
        *y = tep;
    }

}
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    sa(&a, &b);
    sa(&a, &c);
    sa(&b, &c);
    printf("%d %d %d ", a, b, c);


    return 0;
}