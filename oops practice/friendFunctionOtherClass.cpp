#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumComplex(Complex, Complex);
};

class Complex
{
    int a;
    int b;

    friend int Calculator :: sumComplex(Complex o1, Complex o2);

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void printNumber()
    {
        cout << "Your complex: " << a << "+" << b << "i" << endl;
    }
};

int Calculator ::sumComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    Complex c1, c2, sum;

    c1.setData(2, 4);
    c1.printNumber();

    c2.setData(3, 6);
    c2.printNumber();

    Calculator calc;
    int result = calc.sumComplex(c1, c2);
    cout << "The sum of real part of o1 and o2 is " << result;
    return 0;
}