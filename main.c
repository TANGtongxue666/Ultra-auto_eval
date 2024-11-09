//202410114108
//2198557277@qq.com
//唐鑫
#include <stdio.h>
int main()
{   

// 函数声明，用于计算阶乘
int factorial(int n);

int main() {
    int num;
    printf("请输入一个整数: ");
    scanf("%d", &num);

    // 调用函数计算阶乘并输出结果
    int result = factorial(num);
    printf("%d的阶乘是: %d\n", num, result);

    return 0;
}

// 定义计算阶乘的函数
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }

    
    
}
