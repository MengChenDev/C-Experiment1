#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("请输入年利率rate（%%）：");
    float rate;
    scanf("%f", &rate);
    printf("请输入存款期n（年）：");
    int n;
    scanf("%d", &n);
    printf("请输入存款本金capital（元）：");
    int capital;
    scanf("%d", &capital);
    /* 不使用pow()幂函数的解法，不需要导入math库
    //计算倍率
    float ratio = 1;
    for (int i = 0; i < n; i++) {
        ratio *= 1 + rate / 100;
    }
    //计算本利之和
    */

    // 使用pow()幂函数的解法，需要导入math库
    float ratio = 1 + rate / 100;
    float deposit = capital * pow(ratio, n);
    printf("本利之和为：%.2f元", deposit); // 保留2位小数
    return 0;
}