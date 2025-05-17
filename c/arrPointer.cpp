#include <stdio.h>
#include <stdlib.h>

// maxv 函式：找出整數陣列中最大值
// v[] 是陣列，n 是元素個數
int maxv(int v[], int n){
    int max = v[0];  // 假設第一個元素是最大值
    for (int i = 1; i < n; i++){  // 從第 2 個元素開始比較
        if (v[i] > max){
            max = v[i];  // 如果找到更大的，就更新 max
        }
    }
    return max;  // 回傳最大值
}

int main(){
    int a[3] = {3, 9, 7};  // 測試用陣列 a，3 個元素
    printf("Max: %d\n", maxv(a, 3));  // 呼叫 maxv 找最大值並印出

    int b[5] = {3, 9, 1, 2, 7};  // 測試用陣列 b，5 個元素
    printf("Max: %d\n", maxv(b, 5));  // 呼叫 maxv 找最大值並印出

    system("pause");  // 暫停畫面（Windows 環境用）
    return 0;
}
