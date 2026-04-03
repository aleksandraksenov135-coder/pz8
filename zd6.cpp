#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    if ((x >= 1 && x <= 5) || (x >= 10 && x <= 15)) {
        cout << "Число принадлежит одному из диапазонов";
    } else {
        cout << "Число не принадлежит указанным диапазонам";
    }
    
    return 0;
}
