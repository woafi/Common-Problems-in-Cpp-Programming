#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter = 0;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void getPrice(void)
    {
        cout << counter + 1 << " Enter ID of your Item: " << endl;
        cin >> itemId[counter];
        cout << "Enter Price of your Item: " << endl;
        cin >> itemPrice[counter];
        counter++;
    }
    void displayPrice(void)
    {
        for (int i = 0; i < counter; i++)
        {
            cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
        }
    }
};

int main()
{
    shop dukaan;

    for (int i = 0; i < 2; i++)
    {   
        dukaan.getPrice();
        dukaan.displayPrice();
    }

    return 0;
}
