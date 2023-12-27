// 14. Refactoring code from using raw pointers ?

#include <iostream>
#include <memory>

using namespace std;

class Device {
public:
    Device() { cout << "Device initialized\n"; }

    ~Device() { cout << "Device shut down\n"; }
};

void operateDevice(Device *dev) {
    cout << "Operating device\n";
}

int main() {
    // Refactored to use smart pointers
    std::unique_ptr<Device> device(new Device());
    operateDevice(device.get()); // To use the raw pointer from unique_ptr, use get() method
    // No need for explicit deletion, smart pointers handle memory management automatically
    return 0;
}
