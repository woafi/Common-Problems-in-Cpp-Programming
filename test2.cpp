#include <iostream>
#include <string>

using namespace std;

string replaceSubstring(const string& originalText, const string& Substring, const string& newSubstring) {
    string replacedText = originalText;

    size_t pos = replacedText.find(Substring);
    while (pos != string::npos) {
        replacedText.replace(pos, Substring.length(), newSubstring);
        pos = replacedText.find(Substring, pos + newSubstring.length());
    }

    return replacedText;
}

int main() {
    string originalText = "This is his last message.";
    string Substring = "is";
    string newSubstring = "ABC";
 
    string result = replaceSubstring(originalText, Substring, newSubstring);

    cout << "Original Text:" << endl << originalText << endl << endl;
    cout << "Text after Replacement:" << endl << result << endl;

    return 0;
}
