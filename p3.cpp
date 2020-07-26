#include <iostream>
using namespace std;
int main()
{
    int arr[20], n, j, i, temp;
    cout << "Enter limit : " << endl;
    cin >> n;
    cout << "Enter elements: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i <= n - 1; i++)
    {
        temp = arr[i];
        j = i - 1;
        while ((temp < arr[j] && (j >= 0)))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
    cout << "Sorted array is: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}