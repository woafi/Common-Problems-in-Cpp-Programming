#include <iostream>
using namespace std;

class pen{
    public:
    string color;
    string type;

    void displaydata();
    void colorprint();
    pen(){
        cout<<"auto"<<endl;
    }
    pen(){
        cout<<"auto2"<<endl;
    }
};
void pen :: colorprint(){
    cout<< color<<endl;
}
void pen :: displaydata(void){
    cout<<"Writing Something"<<endl;
}

int main(){
    pen pen1;
    pen1.color="Black";
    pen1.displaydata();
    pen1.colorprint();
    return 0;
}

