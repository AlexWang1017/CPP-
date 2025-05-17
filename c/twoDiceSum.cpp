#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0)); // 初始化亂數種子
    int counter[11] = {0}; // index 0~10 分別對應和為 2~12 的次數
    int dice1, dice2, sum;

    // 擲骰子 100000 次
    for (int i = 1; i <= 100000; i++) {
        dice1 = rand() % 6 + 1; // 模擬第一顆骰子
        dice2 = rand() % 6 + 1; // 模擬第二顆骰子
        sum = dice1 + dice2;    // 計算總和
        counter[sum - 2]++;     // 將總和次數加到對應位置
    }

    // 印出各點數和出現次數
    for (int j = 2; j <= 12; j++) {
        printf("%d: %d\n", j, counter[j - 2]);
    }

    system("pause");
    return 0;
}
