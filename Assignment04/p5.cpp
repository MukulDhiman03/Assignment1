/*Create any base class as per your wish and extend that into other derived class. You should be able to
understand the calling order or default constructors, parameterised constructors and destructors of all
the classes. You should implement hybrid inheritance in this example.*/



#include<iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"base class constructor is called:\n";
    }
    ~base()
    {
        cout<<"base class destructor is called:\n";
    }
};

class derived_1:public base
{

public:
    derived_1()
    {
        cout<<"derived_1 class constructor is called\n";
    }

    ~derived_1()
    {
        cout<<"derived_1 class destructor is called\n";
    }
};
class derived_2:public base
{
public:
    derived_2()
    {
        cout<<"derived_2 class constructor is called\n";
    }


    ~derived_2()
    {
        cout<<"derived_2 class destructor is called\n";
    }
};

class mutual_child:public derived_1,public derived_2
{
public:
    mutual_child()
    {
        cout<<"mutual child class constructor is called\n\n\n";
    }
    ~mutual_child()
    {
        cout<<"mutual child class destructor is called\n";
    }

};

int main()
{
    mutual_child m1;
}
