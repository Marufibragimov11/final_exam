// 8. Predict the output of the above code ?

#include <iostream>

using namespace std;

int main() {
    int n = 5;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum of numbers from 1 to " << n << " is " << sum << endl;
    return 0;
}

// Answer is: Sum of numbers from 1 to 5 is 15