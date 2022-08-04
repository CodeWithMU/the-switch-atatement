#include <iostream>
using namespace std;
int main()
{
    char choice;
    cout << "please enter value:";
    cin >> choice;
    switch (choice)
    {
    case '1':
        cout << "you enter 1." << endl;
        break;
    case '2':
        cout << "you enter 2." << endl;
        break;
    case '3':
        cout << "you enter 3." << endl;
        break;
    case '4':
        cout << "you enter 4." << endl;
        break;

    default:
        cout << "invalid";
        break;
    }
    return 0;
}