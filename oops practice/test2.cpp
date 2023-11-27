#include <iostream>
#include <string>
#include <algorithm>

void replaceSubStr(
    std::string &str,
    const std::string &subStr,
    const std::string &replacement)
{

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
    std::string str = "This is his last message.";
    std::string subStr = "is";
    std::string replacement = "ABC";

    std::cout << "Original string: " << str << std::endl;

    // Replace All occurrences of a substring in string
    replaceSubStr(str, subStr, replacement);

    std::cout << "Modified string: " << str << std::endl;

    return 0;
}