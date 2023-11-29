#include <iostream>
using namespace std;

class point{
    public:
    int x,y;
    point(int x1, int y1);
    point(const point &p2);
    int getX() { return x;}
    int getY() {return y;}
};

point :: point(int x1, int y1){
        x=x1; 
        y=y1;
    }
point :: point(const point &p2){
        x=p2.x; 
        y=p2.y;
    }
    


int main(){
    point p1(10, 15);
    point p2=p1;

    cout<< "p1.x="<<p1.getX() <<endl<< "p1.y="<<p1.getY()<<endl;
    cout<<"p2.x="<<p2.getX()<<endl<<"p2.y="<<p2.getY();
    


    return 0;
}