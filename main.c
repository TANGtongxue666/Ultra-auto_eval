//
//
//
#include <stdio.h>

{

int main() 
    int arr[] = {1, 2, 3, 4, 5};

    // 使用sizeof运算符计算数组长度
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("数组的长度为: %d\n", length);

    // 使用for循环输出数组元素
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    

    

   
    return 0;
}
