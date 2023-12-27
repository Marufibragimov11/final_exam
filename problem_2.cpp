//What is the output of the following code?

#include <iostream>

using namespace std;

void add_to_sum() {
    static int sum = 0;
    sum += 5;
    cout << sum << " ";
}

void reset_sum() {
    int sum = 0;
    sum += 10;
    cout << sum << " ";
}

int main() {
    for (int i = 0; i < 3; i++) {
        add_to_sum();
        reset_sum();
    }
    cout << endl;
    return 0;
}

// Answer is: 5 10 10 10 15 10