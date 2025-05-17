#include <iostream>
using namespace std;

int main(){

    int a = 10;
    // 前置遞增：先把 a 加 1，然後再乘以 10
    // a 變成 11，再計算 b = 11 * 10
    int b = ++a * 10;
    cout << "b = " << b << endl;  // 輸出：b = 110

    int a2 = 10;
    // 後置遞增：先使用 a2 原本的值 10 去乘以 10，再把 a2 加 1
    // 所以先算 b2 = 10 * 10，然後 a2 變成 11
    int b2 = a2++ * 10;
    cout << "b = " << b2 << endl;  // 輸出：b = 100

    system("pause"); // 暫停程式執行，等待使用者按任意鍵
    return 0;
}
