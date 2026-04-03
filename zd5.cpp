#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    if (x >= 1 && x <= 10) {
        cout << "Число принадлежит диапазону";
    } else {
        cout << "Число не принадлежит диапазону";
    }
    
    return 0;
}