#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n], i, num, index;
    
    for(i=0; i<n; i++){
        cout << "Element(" << i<<") : ";
        cin>>arr[i];
    }
    int chk, j;
    cout<<"\nEnter the Number to Search: ";
    cin>>num;
    for(i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            arrTemp[j] = i; // arrTemp is a temporary array list of arr elemets
            j++;
            chk++;
        }
    }
    if(chk>0)
    {
        cout<<endl<<num <<" Found at Index No. ";
        n = chk;
        for(i=0; i<n; i++)
            cout<<arrTemp[i]<<" ";
    }
    else
        cout<<endl<<num <<" does not Found!";
    cout<<endl;
    return 0;
}
