#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    if (x > 0 && x % 2 == 0 && x < 100) {
        cout << "Подходит";
    } else {
        cout << "Не подходит";
    }
    
    return 0;
}