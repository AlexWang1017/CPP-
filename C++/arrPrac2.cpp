#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    // 交換 arr[i] 與 arr[len - 1 - i]
    for (int i = 0; i < len / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }

    // 輸出反轉後的陣列
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
