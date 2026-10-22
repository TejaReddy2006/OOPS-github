#include <iostream>
using namespace std;

class Counter {
    int count;

public:
    Counter(int c = 0) : count(c) {}

    Counter& operator++() {
        ++count;
        return *this;
    }

    int getValue() {
        return count;
    }
};

class SafeArr {
    int arr[3] = {10, 20, 30};

public:
    int& operator[](int index) {
        if (index < 0 || index >= 3) {
            throw "out of range!";
        }
        return arr[index];
    }
};

int main() {
    Counter c(6);
    ++c;
    cout << "Counter = " << c.getValue() << endl;

    SafeArr s;
    cout << "s[2] = " << s[2] << endl;

    try {
        cout << s[5] << endl;
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}