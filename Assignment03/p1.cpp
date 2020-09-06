/*Modify the Complex class program to enable input and output of complex numbers via overloaded >>
and << operators, respectively. */
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex(int x = 0, int y = 0)
    {
        real = x;
        img = y;
    }
    void print()
    {
        cout << real << " + " << img << "i" << endl;
    }
    Complex operator+(Complex const &obj)
    {
        Complex result;
        result.real = real + obj.real;
        result.img = img + obj.img;
        return result;
    }

    void operator<<(Complex const &obj)
    {

        cout << real << " + " << img << "i" << endl;
    }

    void operator>>(Complex const &obj)
    {
        cout << "enter real part " << endl;
        cin >> real;
        cout << "enter img part " << endl;
        cin >> img;
    }
};

int main()
{
    Complex c1(5, 10), c2(6, 2);
    Complex c3 = c1 + c2;
    c1.print();
    c2.print();
    c3.print();
    Complex c4;

    c4 >> c4;
    cout << "the number you entered is " << endl;
    c4 << c4;
}