/*Overload the == and != operators to allow comparisons of complex numbers*/
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
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

    Complex operator==(Complex const &obj)
    {
        if (real == obj.real)
        {
            if (img == obj.img)
            {
                cout << "They are equal " << endl;
            }
        }
        else
        {
            cout << "Nope, they are not equal " << endl;
        }
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
    Complex c1(10, 10), c2(10, 10);
    Complex c3;
    c1 == c2;
}