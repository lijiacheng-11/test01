// 202610305213
// 李嘉成


#include <stdio.h>
#include <stdlib.h>
int main() {
    float a = 0.0, b = 0.0;
    char op;
    printf("数1 运算符 数2: ");
    scanf("%f %c %f", &a, &op, &b);
    if (op == '+') {
        printf("结果为: %.2f\n", a + b);
    } else if (op == '-') {
        printf("结果为: %.2f\n", a - b);
    } else if (op == '*') {
        printf("结果为: %.2f\n", a * b);
    } else if (op == '/') {
        if (b != 0) {
            printf("结果为: %.2f\n", a / b);
        } else {
            printf("除数不能为零。\n");
        }
    } else {
        printf("我说太难了,换个简单点的运算,你耳朵聋吗?\n");
    }
    return 0;
}