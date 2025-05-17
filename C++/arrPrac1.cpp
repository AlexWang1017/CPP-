#include <iostream>
using namespace std;

int main(){
    // 宣告一個整數陣列
    int arr[] = {300, 350, 200, 400, 250};

    // 取得陣列長度
    int len = sizeof(arr) / sizeof(arr[0]);

    // 將 max 初始化為第一個元素，避免負數錯誤
    int max = arr[0];

    // 透過迴圈找最大值
    for (int i = 1; i < len; i++){
        if (arr[i] > max){
            max = arr[i];  // 更新最大值
        }
    }

    // 輸出最大值
    cout << max << endl;

    system("pause"); // 暫停畫面
    return 0;
}
