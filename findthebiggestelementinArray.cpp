#include<iostream>
using namespace std;
int main ()
{
    cout << "Enter the size of the array : ";
    int n;
    int i, Max, Min;
    
    cin >> n;
    int arr[n];
    
    for (i = 0; i < n; i++)
    {
        cout << "Element(" << i<<") : ";
        cin >> arr[i];
    }

    Max = arr[0]; // initial declare

    for (i = 0; i < n; i++)
    {
        if (Max < arr[i])
        {
             Max = arr[i];
        }
    }
    Min = arr[0]; // initial declare

    for (i = 0; i < n; i++)
    {
        if (Min > arr[i])
        {
            Min= arr[i];
        }
    }
    cout << "Largest element : " << Max << endl;
    cout << "Smallest element : " << Min;
    return 0;
}
