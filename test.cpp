#include <iostream>
using namespace std;

class cal
{
    int a, b;

public:
    void setData(int d1, int d2)
    {
        a = d1;
        b = d2;
    }

    friend cal sumComplex(cal o1, cal o2);

    void printnumb()
    {
        cout << a << " + " << b << "i";
    }
};

cal sumComplex(cal o1, cal o2)
{
    cal obj;
    obj.setData((o1.a + o1.b), (o2.b + o2.b));
    return obj;
}

int main()
{
    cal o1, o2, o3;
    o1.setData(2, 4);
    o2.setData(3, 6);

    o3 = sumComplex(o1, o2);
    o3.printnumb();

    return 0;
}