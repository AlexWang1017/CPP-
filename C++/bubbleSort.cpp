#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int v[] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    int len = sizeof(v)/sizeof(v[0]);

    for (int i = 0; i < len - 1; i++){
        for (int j = 0; j < len - i - 1; j++){
            if (v[j] > v[j+1]){
                swap(&v[j], &v[j+1]); // 傳指標
            }
        }
    }

    for (int i = 0; i < len; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
