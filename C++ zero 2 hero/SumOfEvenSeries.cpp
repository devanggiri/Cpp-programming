#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum;
    cout << "Enter the number up to which you want to print even numbers: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            sum = sum + i;
            cout << i << " ";
        }
    }
    cout<<"\n"<<"sum is: "<<sum;

    return 0;
}
