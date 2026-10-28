// 202610305213
// 李嘉成


#include <stdio.h>
int main() {
   float a = 0.0;
   printf("输入一个0到100的数: ");
   scanf("%f", &a);
    if (a >= 90 && a <= 100) {
         printf("成绩等级为A\n");
    } else if (a >= 80 && a <=89.99) {
         printf("成绩等级为B\n");
    } else if (a >= 70 && a <=79.99) {
         printf("成绩等级为C\n");
    } else if (a >= 60 && a <=69.99) {
         printf("成绩等级为D\n");
    } else if (a >= 0 && a <=59.99) {
         printf("成绩等级为E\n");
    } else {
         printf("输入无效,请输入一个0到100之间的数字。\n");
    }
    return 0;
}