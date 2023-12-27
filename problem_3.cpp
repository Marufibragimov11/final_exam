// 3. What is the output of the following code?
#include <iostream>

using namespace std;

void display(string text) {
    cout << "String: " << text << endl;
}

void display(int num) {
    cout << "Number: " << num << endl;
}

int main() {
    display("Hello World");
    display(42);
    return 0;
}

// Answer is: String: Hello World Number: 42