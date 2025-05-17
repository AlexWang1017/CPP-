#include <iostream>
using namespace std;

int main(){
    int ans = rand() % 100 + 1;
    int num = 0;
    
    while(num != num){
        cin >> num;
        if (num > ans){
            cout << "It's larger than the answer" << endl;
        }
        if (num < ans){
            cout << "It's smaller than the answer" << endl;
        }
    }   
    system("pause");
    return 0;
}