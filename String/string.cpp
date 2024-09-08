#include<iostream> 
#include <algorithm> 
using namespace std;



int main(){
    string str;
    // getline (cin, str);
    // cout<< str<< endl;
    // cin.ignore();
    // cout<<str[0]<<endl;
    // cout<<str.length()<<endl;
    // str.clear();
    // cout<<str.empty()<<endl;
    string s = "moahdfjhd";
    s.erase(s.end()-1);
    s.pop_back();
    copy (s.begin()+2, s.end()+4, back_inserter(s));
    s.erase( remove (s.begin(), s.end(), 'a'),s.end());
    cout<<s<<endl;
    if (s.find("moh")!= -1) cout<<"found"<<endl;
    return 0;
}