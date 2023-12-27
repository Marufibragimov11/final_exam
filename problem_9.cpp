//9. What will be the output of the program ?

#include <iostream>

using namespace std;

int main() {
    int numbers[] = {2, 4, 6, 8, 10};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    cout << "Sum: " << sum << endl;
    return 0;
}

// Answer is: Sum: 30