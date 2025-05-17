#include <iostream>
using namespace std;

int main(){
    srand(time(0));
    int ans = rand() % 100 + 1;
    int num = 0;
    
    while(num != ans){
        cin >> num;
        if (num > ans){
            cout << "It's larger than the answer" << endl;
        }
        else if (num < ans){
            cout << "It's smaller than the answer" << endl;
        }
    }  
    cout << "You got the right answer" << endl;
    system("pause");
    return 0;
}