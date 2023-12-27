// 10. What is the output of this program?
#include <iostream>

using namespace std;

int main() {
    int number = 5;
    int *pointer = &number;
    *pointer = 10;
    cout << "number = " << number << endl;
    return 0;
}

// Answer is: number = 10