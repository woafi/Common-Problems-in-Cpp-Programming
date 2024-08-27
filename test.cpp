#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str, reverseStr;
    
    /* Input string from user */
    getline(cin, str);  // Use getline to allow input with spaces
    
    reverseStr = str;  // Copy original string to reverseStr
    
    reverse(reverseStr.begin(), reverseStr.end());  // Reverse the string
    
    /* Check whether both strings are equal or not */
    if(str == reverseStr)  // Compare original string with reversed string
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}
