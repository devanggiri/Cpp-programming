#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;

    while(i<=n) { //rows

        int j = 1;
        while(j<=n) { //columns
            cout << i;  //cout: i, j, n-j+1
            j = j + 1;
        }
        cout<<endl;
        i = i+1;
    }
}
