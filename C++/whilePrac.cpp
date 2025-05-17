#include <iostream>
#include <cmath> // 使用 pow()
using namespace std;

int main(){
    int num = 100; // 三位數從 100 開始
    do{
        int a = num % 10;           // 個位數
        int b = (num / 10) % 10;    // 十位數
        int c = num / 100;          // 百位數

        // 判斷是否為阿姆斯壯數
        if (pow(a, 3) + pow(b, 3) + pow(c, 3) == num){
            cout << num << endl; // 是的話輸出
        }

        num++;
    } while (num < 1000); // 三位數結束於 999

    system("pause");
    return 0;
}
