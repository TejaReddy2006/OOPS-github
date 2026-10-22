#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    bool operator==(Complex c) {
        return real == c.real && imag == c.imag;
    }

    friend ostream& operator<<(ostream& out, Complex c) {
        out << c.real << (c.imag >= 0 ? "+" : "") 
            << c.imag << "i";
        return out;
    }
};

int main() {
    Complex a(2, 3), b(1, -4);

    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a == b ? " << (a == b ? "yes" : "no") << endl;

    return 0;
} 