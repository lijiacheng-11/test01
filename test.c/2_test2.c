// 202610305213
// 李嘉成


#include <stdio.h>
#include <stdlib.h>
int main() {
    float a = 0.0;
    printf("输入一个数： ");
    scanf("%f", &a);
    if (a > 0) {
        printf("正数\n");
    } else if (a < 0) {
        printf("负数\n");
    } else {
        printf("零\n");
    }
    return 0;
}