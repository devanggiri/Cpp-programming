
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >>ch;

    if(ch >= 'a' && ch <= 'z') 
    {
        cout<< "This is lowercase" <<endl;
    }
    
    if (ch >= 'A' && ch <= 'Z')
    {
        cout<< "This is uppercase" <<endl;
    }
    
    if (ch >= '0' && ch <= '9')
    {
        cout<< "This is numeric" <<endl;
    }
   
    return 0;
}