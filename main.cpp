#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    a = (a & b) + (a | b);

    b = a + (~b) + 1;

    a = a + (~b) + 1;
}

int main() {
    int a = 5, b = 10;

    cout << "Before swapping: a = " << a
         << ", b = " << b << endl;

    swap(a, b);

    cout << "After swapping: a = " << a
         << ", b = " << b << endl;

    return 0;
}
