// Scenario: You have a logging system that currently logs messages to a file. The system now needs to
//        support logging messages to a database and to a network server in addition to the file.
//Task:
//Refactor the ‘Logging’ system to support logging messages to a database and a network server, in
//        addition to a file, For simplicity you don’t have to implement file logging or logging to database, just
//        print out something on the console.
//Apply the Dependency Inversion Principle and the Interface Segregation Principle in your design.
//Hint:
//● Create an interface for logging (like ILogging), with a method like logMessage.
//● Implement this interface in separate classes for each logging method (File, Database, Network).
//● Modify the Logger class to depend on the ILogging interface, not on concrete implementations.
//● Ensure that the Logger system can easily switch between different logging methods without
//        changing its own code.

#include <iostream>
#include <string>

using namespace std;

// Interface for logging
class ILogging {
public:
    virtual void logMessage(const string &message) = 0;

    virtual ~ILogging() {} // Adding a virtual destructor for polymorphic behavior
};

// Implementations for different logging methods
class File : public ILogging {
public:
    void logMessage(const string &message) override {
        cout << "Logging to File: " << message << endl;
    }
};

class Database : public ILogging {
public:
    void logMessage(const string &message) override {
        cout << "Logging to Database: " << message << endl;
    }
};

class Network : public ILogging {
public:
    void logMessage(const string &message) override {
        cout << "Logging to Network: " << message << endl;
    }
};

// Modified Logger class using dependency inversion
class Logger {
    ILogging *loggingMethod; // Depending on interface, not concrete implementations
public:
    Logger(ILogging *logging) : loggingMethod(logging) {}

    void log(const string &message) {
        loggingMethod->logMessage(message);
    }
};

int main() {
    File fileLogger;
    Database dbLogger;
    Network networkLogger;

    Logger file(&fileLogger);
    Logger db(&dbLogger);
    Logger network(&networkLogger);

    file.log("System started - File");
    db.log("System started - Database");
    network.log("System started - Network");

    return 0;
}

