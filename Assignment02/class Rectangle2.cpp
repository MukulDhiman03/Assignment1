/*Now create a more sophisticated Rectangle class than the one you created in problem 4. This
class stores only the Cartesian coordinates of the four corners of the rectangle. The constructor
calls a set function that accepts four sets of coordinates and verifies that each of these is in the
first quadrant with no single x- or y-coordinate larger than 20.0. The set function also verifies
that the supplied coordinates do, in fact, specify a rectangle. Provide member functions that
calculate the length, width, perimeter and area. The length is the larger of the two dimensions.
Include a predicate function square that determines whether the rectangle is a square. */
#include<iostream>
using namespace std;
class Rectangle {
    int x1, x2, x3, x4, y1, y2, y3, y4;
    int length;
    int width;
    int perimeter;
    int area;
public:
    Rectangle(int p1x, int p2x, int p3x, int p4x, int p1y, int p2y, int p3y, int p4y) {
        setCoordinates(p1x, p2x, p3x, p4x, p1y, p2y, p3y, p4y);
    }
    void setCoordinates(int p1x, int p2x, int p3x, int p4x, int p1y, int p2y, int p3y, int p4y)
    {
        if (p1x >= 0 && p1x <= 20)
        {
            x1 = p1x;
        }
        else {
            cout << "please enter something valid";
        }
        if (p2x >= 0 && p2x <= 20)
        {
            x2 = p2x;
        }
        else {
            cout << "please enter something valid";
        }
        if (p3x >= 0 && p3x <= 20)
        {
            x3 = p3x;
        }
        else {
            cout << "please enter something valid";
        }
        if (p4x >= 0 && p4x <= 20)
        {
            x4 = p4x;
        }
        else {
            cout << "please enter something valid";
        }
        if (p1y >= 0 && p1y <= 20)
        {
            y1 = p1y;
        }
        else {
            cout << "please enter something valid";
        }
        if (p2y >= 0 && p2y <= 20)
        {
            y2 = p2y;
        }
        else {
            cout << "please enter something valid";
        }
        if (p3y >= 0 && p3y <= 20)
        {
            y3 = p3y;
        }
        else {
            cout << "please enter something valid";
        }
        if (p4x >= 0 && p4x <= 20)
        {
            y4 = p4y;
        }
        else {
            cout << "please enter something valid";
        }

        if (x1 == x4 && y1 == y2 && x3 == x2 && y3 == y4)
        {
            cout << "it is a Rectangle\n";
        }
        else {
            cout << "it is not a Rectangle\n";
        }

    }
    void dimension()
    {
        int value1 = x2 - x1;
        if (value1 < 0)
        {
            value1 *= -1;
        }
        int value2 = y3 - y1;
        if (value2 < 0)
        {
            value2 *= -1;
        }

        if (value1 > value2)
        {
            length = value1;
            cout << "Length =>" << length << "\n";
            width = value2;
            cout << "Width => " << width << "\n";
        }
        else {
            length = value2;
            cout << "Length =>" << length << "\n";
            width = value1;
            cout << "width =>" << width << "\n";
        }
    }
    void perime()
    {

        perimeter = 2 * (length + width);
        cout << perimeter << "\n";
    }
    void ar()
    {
        area = length * width;
        cout << area;
    }
    void isSqaure()
    {
        if (length == width)
        {
            cout << "it is a Sqaure";
        }
        else {
            cout << "it is not a Sqaure";
        }
    }

};
int main()
{
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cout << "enter the value of thecoordinates"<<endl;
    cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
    Rectangle obj(x1, x2, x3, x4, y1, y2, y3, y4);
    obj.dimension();
    obj.isSqaure();
    cout << endl;
    cout << "Area:  ";
    obj.ar();
    cout << "\nperimeter: ";
    obj.perime();
    return 0;
} 