// 202610305213
// 李嘉成


#include <stdio.h>
#include <stdlib.h>
int main() {
    float a = 0.0;
    float F = 0.0;
    printf("输入摄氏温度： ");
    scanf("%f", &a);
    F = a * 9.0 / 5.0 + 32.0;
    printf("华氏温度为: %.2f\n", F);
    return 0;
}
