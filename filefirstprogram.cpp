#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string st ="Woafi have done it";
    string st3 ="\n2nd line";

    //opening files using constructor
    ofstream out("firstfileprogram.txt");
    //write operation
    out<<st;
    out<<st3;

    string st2;
    //opening files using constructor
    ifstream in("firstfileprogram.txt");
    //read operation
    //in>>st2; for reading a first word from file
    getline(in, st2); //for firstline of file
    //getline(in, st2); //for 2nd line of file //after 2nd line of execution 1st line will be vanish
    cout<<st2;
    
    return 0;
}