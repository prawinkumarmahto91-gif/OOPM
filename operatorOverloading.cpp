#include <bits/stdc++.h>
using namespace std;

class Complex {

    float real, img;

public:

    Complex(float r = 0, float i = 0) {
        real = r;
        img = i;
    }

    // Operator overloading for +
    Complex operator+(Complex c) {
        Complex temp;

        temp.real = real + c.real;
        temp.img = img + c.img;

        return temp;
    }

    // Type conversion: Complex to float
    operator float() {
        return real;
    }

    // Display function
    void display() {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {

    Complex c1(3, 4);
    Complex c2(4, 5);

    Complex c3 = c1 + c2;

    cout << "Sum: ";
    c3.display();

    float x = c1;

    cout << "Real part after type conversion: " << x << endl;

    return 0;
}
