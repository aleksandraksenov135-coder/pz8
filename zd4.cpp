#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    if (a > b) {
        cout << "Большее число: " << a;
    } else if (a < b) {
        cout << "Большее число: " << b;
    } else {
        cout << "Числа равны";
    }
    
    return 0;
}