/*Create a class called Date that includes three pieces of information as data members—a month
(type int), a day (type int) and a year (type int). Your class should have a con- structor with
three parameters that uses the parameters to initialize the three data members. For the purpose
of this exercise, assume that the values provided for the year and day are correct, but ensure
that the month value is in the range 1–12; if it isn’t, set the month to 1. Provide a set and a get
function for each data member. Provide a member function displayDate that displays the
month, day and year separated by forward slashes (/). Write a test program that demonstrates
class Date’s capabilities. */
#include<iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;
public:
    Date()
    {
        int a, b, c;
        cout<<"Enter the date,month and year";
        cin>>a>>b>>c;
        day=a;
        month=b;
        year=c;
        if (month<1||month>12)
            month=1;
    }
    int setday()
    {
        int d;
        cout<<"Enter the date";
        cin>>d;
        day=d;
        return 0;
    }
    int getmonth()
    {
        int e;
        cout<<"Enter the month";
        cin>>e;
        month=e;
        return 0;
    }
    int getyear()
    {
        int f;
        cout<<"Enter the year";
        cin>>f;
        year=f;
        return 0;
    }
    int displayDate()
    {
        cout<<"the date is:";
        cout<<month<<"/"<<day<<"/"<<year;
        return 0;
    }
};
int main()
{
    Date ob;
    ob.setday();
    ob.getmonth();
    ob.getyear();
    ob.displayDate();
    return 0;
} 