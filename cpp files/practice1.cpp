#include <iostream>
using namespace std;

float average(int arr[]);
int main()
{
    int x[3] = {1,3,67};
    float result;
    result = average(x);
    cout <<"The average is " << result;
    return 0;
}
float average(int arr[])
{
   int sum = 0;
   for(int i=0;i<3;i++)
    {
        sum+=arr[i];
    }
   return(sum/3);
}
