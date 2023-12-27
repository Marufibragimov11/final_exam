// 6. Fill in the missing parts of the code to define a class named 'Animal' with private attributes: 'species'
//(string) and 'age' (int). Provide a public constructor and a method to display animal details.

#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string species;
    int age;

public:
    Animal(string species, int age) {
        this->species = species;
        this->age = age;
    }

    void displayDetails() {
        cout << "Species: " << species << ", Age: " << age << " years" << endl;
    }
};

int main() {
    Animal animal1("Lion", 5);
    animal1.displayDetails();
    return 0;
}

// Answer is: Species: Lion, Age: 5 years