#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    if (x < 0) {
        cout << "Число отрицательное";
    } else {
        cout << "Число не отрицательное";
    }
    
    return 0;
}