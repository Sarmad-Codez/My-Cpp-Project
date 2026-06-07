#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Apne marks enter karein (0-100): ";
    cin >> marks;

    // Logic: Agar marks 50 ya us se zyada hain
    if (marks >= 50) {
        cout << "Mubarak ho! Aap Pass hain." << endl;
    } 
    else {
        cout << "Afsos! Thori aur mehnat ki zaroorat hai." << endl;
    }

    return 0;
}
