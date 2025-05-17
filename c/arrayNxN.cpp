#include <stdio.h>
#include <stdlib.h>

// 將 2D 陣列轉成指標處理：v 是一個指向 int 的指標
void print(int *v, int height, int width){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            // 使用位移方式存取第 i 行第 j 列的元素
            printf("%d ", *(v + i * width + j));
        }
        printf("\n");
    }
}

int main(){
    // 宣告並初始化一個 3x3 的二維陣列
    int v[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };

    // 傳入時將二維陣列轉型為一維指標 (int *)
    print((int *)v, 3, 3);

    system("pause");
    return 0;
}


/*
索引        值         地址偏移
v[0][0]     1          *(v + 0)
v[0][1]     2          *(v + 1)
v[0][2]     3          *(v + 2)
v[1][0]     4          *(v + 3)
v[1][1]     5          *(v + 4)
v[1][2]     6          *(v + 5)
v[2][0]     7          *(v + 6)
v[2][1]     8          *(v + 7)
v[2][2]     9          *(v + 8)

🧮 通用公式：
css
複製
編輯
v[i][j] 等價於 *(v + i * width + j)
v：是陣列起始位址

i：第幾行

width：每一行有幾個元素

j：第幾列




*/