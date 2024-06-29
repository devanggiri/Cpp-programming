// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string str;
//     cout << "Enter a string: ";
//     cin >> str;

//     bool hasLowercase = false;
//     bool hasUppercase = false;
//     bool hasNumeric = false;
//     bool hasSpecial = false;

//     for (char ch : str) {
//         if (ch >= 'a' && ch <= 'z') {
//             hasLowercase = true;
//         }
//         else if (ch >= 'A' && ch <= 'Z') {
//             hasUppercase = true;
//         }
//         else if (ch >= '0' && ch <= '9') {
//             hasNumeric = true;
//         }
//         else {
//             hasSpecial = true;
//         }
//     }

//     cout << "The string contains:" << endl;
//     if (hasLowercase) {
//         cout << "- Lowercase letters" << endl;
//     }
//     if (hasUppercase) {
//         cout << "- Uppercase letters" << endl;
//     }
//     if (hasNumeric) {
//         cout << "- Numeric characters" << endl;
//     }
//     if (hasSpecial) {
//         cout << "- Special characters" << endl;
//     }

//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string lowercase, uppercase, numeric, special;

    for (char ch : str) {
        if (ch >= 'a' && ch <= 'z') {
            lowercase += ch;
        } else if (ch >= 'A' && ch <= 'Z') {
            uppercase += ch;
        } else if (ch >= '0' && ch <= '9') {
            numeric += ch;
        } else {
            special += ch;
        }
    }

    cout << "The string contains:" << endl;
    if (!lowercase.empty()) {
        cout << "- Lowercase letters: \"" << lowercase << "\"" << endl;
    }
    if (!uppercase.empty()) {
        cout << "- Uppercase letters: \"" << uppercase << "\"" << endl;
    }
    if (!numeric.empty()) {
        cout << "- Numeric characters: \"" << numeric << "\"" << endl;
    }
    if (!special.empty()) {
        cout << "- Special characters: \"" << special << "\"" << endl;
    }

    return 0;
}
