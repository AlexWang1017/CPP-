#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // 使用當前時間作為亂數種子
    int counter[6] = {0}; // counter[0] 對應點數 1，依此類推

    // 模擬擲骰子 6000 次
    for (int i = 0; i < 6000; i++) {
        int dice = rand() % 6 + 1; // 隨機產生 1~6
        switch(dice) {
            case 1: counter[0]++; break;
            case 2: counter[1]++; break;
            case 3: counter[2]++; break;
            case 4: counter[3]++; break;
            case 5: counter[4]++; break;
            case 6: counter[5]++; break;
        }
    }

    // 印出每個點數的次數
    for (int i = 0; i < 6; i++) {
        printf(" %d :%d\n", i + 1, counter[i]);
    }

    system("pause");
    return 0;
}
