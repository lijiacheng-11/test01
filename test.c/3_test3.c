// 202610305213
// 李嘉成


#include <stdlib.h>
int main() {
    printf("输入三条边大小： ");
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("可以构成三角形\n");
    } else {
        printf("不能构成三角形\n");
    }
    return 0;
}