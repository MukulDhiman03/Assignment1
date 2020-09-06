/*Overload the multiplication operator to enable multiplication of two complex numbers as in algebra. */
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
        cout << real << " + " << img << "i"
             << endl;
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

        cout << real << " + " << img << "i"
             << endl;
    }

    void operator>>(Complex const &obj)
    {
        cout << "enter real part "<<endl;
        cin >> real;
        cout << "enter img part "<<endl;
        cin >> img;
    }

    Complex operator*(Complex const &obj)
    {
        Complex result;
        result.real = ((real * obj.real) - (img * obj.img));
        result.img = ((real * obj.img) + (img * obj.real));
        return result;
    }
};

int main()
{
    Complex c1(15, 4), c2(3, 6);
    Complex c3;
    c3 = c1 * c2;
    c3 << c3;
}