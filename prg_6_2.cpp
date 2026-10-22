#include <iostream>
#include <cstring>
using namespace std;

class Text {
    char* str;

public:
    Text(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    Text(const Text& t) {
        str = new char[strlen(t.str) + 1];
        strcpy(str, t.str);
    }

    Text& operator=(const Text& t) {
        if (this != &t) {
            delete[] str;
            str = new char[strlen(t.str) + 1];
            strcpy(str, t.str);
        }
        return *this;
    }

    ~Text() {
        delete[] str;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    Text t1("alpha");
    Text t2("beta");

    t2 = t1;

    t1.display();
    t2.display();

    return 0;
}