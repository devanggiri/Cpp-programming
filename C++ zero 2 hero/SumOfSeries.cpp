#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. upto which you want sum:";
    cin>> n;
    int sum;
    int i;
    sum = 0;
    i = 1;
    while (i<=n){
        cout<<i;
        sum = sum+i;
        i=i+1;
        if (i<=n){
            cout<<"+";
        }
    }
    cout<<"\n"<<"sum is: "<<sum;
    return 0;
}