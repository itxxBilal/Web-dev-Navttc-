#include <iostream>
using namespace std;

int main() {
    for (int a = 1; a <= 5; a++) {
        cout << a << "= " << char('A' + a - 1) << endl;
    }
    return 0;
}


// 1=A
// 2=B
// 3=C
// 4=D
// 5=E