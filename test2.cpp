#include <iostream>
#include <string>
using namespace std;

string deletesubStr(string& str, const string& subStr){
    size_t pos = 0;
    while ((pos =str.find(subStr, pos)) != string::npos){
        str.erase(pos, subStr.length());
    }
    return str;

}


int main(){
    string str = "This is a sample text";
    string subStr = "sample ";

    cout<<"Original txt: "<<str;

    string result = deletesubStr(str, subStr);

    cout<<endl<<"After Modified: "<<result;



    return 0;
}