#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter three integers: " << endl;
    cin >> a >> b >> c;

    // 使用巢狀條件運算子找最大值
    int max = (a > b ? (a > c ? a : c) : (b > c ? b : c));

    cout << "Max = " << max << endl;

    system("pause");
    return 0;
}
