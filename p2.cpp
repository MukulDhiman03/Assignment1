//TO FIND 2nd MAX AND 2nd MIN NUMBER FROM AN INTEGER ARRAY
#include <iostream>
using namespace std;
int main()
{
    int arr[10], n;
    cout << "Enter limit : " << endl;
    cin >> n;
    cout << "Enter elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "The second maximum number of Array is: " << arr[1] << endl;
    cout << "The second minimum number of Array is: " << arr[n - 2] << endl;
      return 0;
}
