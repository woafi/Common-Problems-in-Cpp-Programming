#include <iostream>
#include <algorithm> // For std::sort
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    // Store the numbers in an array for easy sorting
    int arr[3] = {a, b, c};
    
    // Sort the array
    sort(arr, arr + 3);
    
    // Output the sorted numbers
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    
    return 0;
}