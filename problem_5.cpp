// 5. What is the output of the following code?
#include <iostream>

using namespace std;

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int numbers[] = {5, 10, 15, 20, 25};
    reverseArray(numbers, 5);
    for (int n: numbers) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}

// Answer is: 25 20 15 10 5