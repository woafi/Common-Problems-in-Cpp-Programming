#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void replaceSubStr(string str,
    string subStr,
    string replacement){

    // Search for the given substring in string
    size_t pos = str.find(subStr);
    // Iterate till index position of substring is valid
    while (pos != std::string::npos)
    {
        // Replace the first occurrence of substring in string
        // from position pos onwards
        str.replace(pos, subStr.length(), replacement);
        // Get the index position of next occurrence of substring in string
        pos = str.find(subStr, pos + replacement.length());
    }
}

int main()
{
    string str = "This is his last message.";
    string subStr = "is";
    string replacement = "ABC";

    cout << "Original string: " << str;

    // Replace All occurrences of a substring in string
    replaceSubStr(str, subStr, replacement);

    cout << "\nModified string: " << str;

    return 0;
}