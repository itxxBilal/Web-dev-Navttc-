#include <iostream>
using namespace std;

int main() {
    // Series 1: 2 4 8 16 32 64 128
    int num1 = 2;
    for (int i = 0; i < 7; ++i) {
        cout << num1 << " ";
        num1 *= 2;
    }
    cout << endl << "------------------------" << endl;

    // Series 2: 5 10 15 20 25 30
    for (int i = 1; i <= 6; ++i) {
        cout << 5 * i << " ";
    }
    cout << endl << "------------------------" << endl;

    // Series 3: 128 64 32 16 8 4 2
    int num2 = 128;
    for (int i = 0; i < 7; ++i) {
        cout << num2 << " ";
        num2 /= 2;
    }
    cout << endl << "------------------------" << endl;

    // Series 4: 1 1 2 3 5 8 13
    int a = 0, b = 1, temp;
    for (int i = 0; i < 7; ++i) {
        cout << b << " ";
        temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl << "------------------------" << endl;

    // Series 5: A B C D E F G
    char ch = 'A';
    for (int i = 0; i < 7; ++i) {
        cout << ch++ << " ";
    }
    cout << endl << "------------------------" << endl;

    // Series 6: A A A A A A A
    for (int i = 0; i < 7; ++i) {
        cout << "A ";
    }
    cout << endl << "------------------------" << endl;

    return 0;
}

// outout
// 2 4 8 16 32 64 128 
// ------------------------
// 5 10 15 20 25 30 
// ------------------------
// 128 64 32 16 8 4 2 
// ------------------------
// 1 1 2 3 5 8 13 
// ------------------------
// A B C D E F G 
// ------------------------
// A A A A A A A 
// ------------------------