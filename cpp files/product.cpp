#include<iostream>
using namespace std;
class Product
{
    public:
    int pro(int arr[],int n)
    {
        if(n == -1)
            return 1;
        else
            return arr[n]*pro(arr,n-1);
    }
};
int main()
{
    Product test;
    int n;
    cout << "Enter size of Array" << endl;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        {
            cout << "Enter " << i+1 << " Element:" << endl;
            cin >> arr[i];
        }

    cout << "The product is " << test.pro(arr,n-1) << endl;
    return 0;
}

