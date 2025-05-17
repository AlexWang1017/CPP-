#include <iostream>
using namespace std;

int main(){
    cout << 1 << endl;      // 印出 1
    cout << 2 << endl;      // 印出 2
    goto flag;              // 跳到標籤 flag
    cout << 3 << endl;      // 被跳過，不執行
    cout << 4 << endl;      // 被跳過，不執行

    flag:                       // 跳轉到這裡
    cout << 5 << endl;      // 印出 5

    system("pause");
    return 0;
}
