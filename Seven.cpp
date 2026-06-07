#include <iostream>
using namespace std;

// 'int' ka matlab hai ke yeh function ek number wapis karega
int multi(int x, int y) {
    int jawab = x * y;
    return jawab; // Yeh line jawab wapis main() ko bhej deti hai
}

int main() {
    int result;

    // Function ko bulaya aur uska jawab 'result' mein store kar liya
    result = multi(5, 6); 

    cout << "Multiplication ka result hai: " << result << endl;

    // Hum is result ko mazeed use bhi kar sakte hain
    cout << "Agar result mein 10 jama karein toh: " << result + 10 << endl;

    return 0;
}
