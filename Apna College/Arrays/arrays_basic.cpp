#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Input n: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Input value for arr[" << i << "]: ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Value of arr[" << i << "] is " << arr[i] << endl;
    }
    int arrMin = INT_MAX;
    int arrMax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        arrMin = min(arrMin, arr[i]);
        arrMax = max(arrMax, arr[i]);
    }
    cout << "Max: " << arrMax << endl;
    cout << "Min: " << arrMin << endl;
    return 0;
}