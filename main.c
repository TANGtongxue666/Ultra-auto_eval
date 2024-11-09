#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3

int main() {
    // 声明二维数组
    int matrix[ROWS][COLS];

    // 输入二维数组元素
    printf("请输入矩阵的元素（按行输入，每行%d个元素）：\n", COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 输出二维数组（矩阵）
    printf("输入的矩阵为：\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
