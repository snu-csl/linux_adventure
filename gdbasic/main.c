#include <stdio.h>

int sum(int x, int y) {
    return x + y;
}

int main() {
    int x, y, res;
    scanf("%d %d", &x, &y);
    res = sum(x, y);
    printf("result is %d\n", res);
    return 0;
}