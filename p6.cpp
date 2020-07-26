//TO CHECK WHETHER A NO IS PRIME OR NOT
#include <iostream>
using namespace std;
int main()
{
    int n, i, flag = 0;
    cout << "Enter a no : " << endl;
    cin >> n;
    for (i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << n << " is not a prime no." << endl;
    }
    else
    {
        cout << n << " is  a prime no." << endl;
    }
      return 0;
}