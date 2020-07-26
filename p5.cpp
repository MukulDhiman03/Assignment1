//TO CHECK WHETHER A STRING IS PALINDROME OR NOT
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter string: " << endl;
    cin >> str;
    int l = str.length();
    int temp = 0;
    for (int i = 0; i < l / 2; i++)
    {
        if (str[i] != str[l - i - 1])
        {
            temp = 1;
        }
    }
    if (temp == 1)
    {
        cout << " String is not Palindrome " << endl;
    }
    else
    {
        cout << "String  is Palindrome " << endl;
    }
      return 0;
}