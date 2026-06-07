#include <iostream>
using namespace std;

int main() {
    // 1. Variables declare karna (Dabbe banana)
    int pehlaNumber; 
    int doosraNumber;
    int sum;

    // 2. User se pehla number mangna
    cout << "Pehla number enter karein: ";
    cin >> pehlaNumber;

    // 3. User se doosra number mangna
    cout << "Doosra number enter karein: ";
    cin >> doosraNumber;

    // 4. Calculation (Logic)
    sum = pehlaNumber + doosraNumber;

    // 5. Result dikhana
    cout << "In dono ka total hai: " << sum << endl;

    return 0;
}
