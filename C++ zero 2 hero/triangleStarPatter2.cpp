#include<iostream>
using namespace std;

int main() {
    
    int n;
    cin>> n;
    int row = 1;
    int pattern = 1; //counter
    
    while (row<=n){
        int col =1;
        while (col<=row){
            cout<< pattern << " "; 
            pattern= pattern+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;  
    }
}









