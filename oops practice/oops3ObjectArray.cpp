#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void getPrice(void)
    {
        cout << "Enter ID of your Item: " << counter + 1 << endl;
        cin >> itemId[counter];
        cout << "Enter Price of your Item: " << endl;
        cin >> itemPrice[counter];
        counter++;
    }
    void displayPrice(void)
    {
        for (int i = 0; i < counter; i++)
        {
            cout << "The Price of item with Id" << itemId[i] << " is " << itemPrice[i] << endl;
        }
    }
};

int main()
{

    shop dukaan[2];
    for (int i = 0; i < 2; i++)
    {
        dukaan[i].initCounter();
        dukaan[i].getPrice();
        dukaan[i].displayPrice();
    }

    return 0;
}