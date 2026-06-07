#include <iostream>
using namespace std;

int main() {
    // 5 dibbon wali array banayi aur values bhar di
    int marks[5] = {45, 78, 90, 32, 66};

    cout << "Array ki values ye hain:" << endl;

    // Loop chala kar har dibbe ki value nikalni hai
    for (int i = 0; i < 5; i++) {
        cout << "Index " << i << " par value hai: " << marks[i] << endl;
    }

    return 0;
}
