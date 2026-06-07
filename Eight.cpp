#include <iostream>
using namespace std;

// 2 numbers ko jama karne wala function
int add(int a, int b) {
    return a + b;
}

// 3 numbers ko jama karne wala function (Naam wahi hai!)
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "2 numbers ka total: " << add(10, 20) << endl;
    cout << "3 numbers ka total: " << add(10, 20, 30) << endl;

    return 0;
}
