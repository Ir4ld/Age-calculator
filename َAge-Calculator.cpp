#include <iostream>
#include <string>
using namespace std;

int main()
{
    int year = 2026;
    int brith;
    int old;
    string name;

    cout << "Enter your NAME : ";
    cin >> name;

    cout << "-------Hello " << name << " in your YEAR CALCULATOR-------\n";

    cout << "Enter your Birth YEAR : ";
    cin >> brith;

    if(brith >= 2026 || brith <= 1900)
    {
        cout << "ERROR ..... Enter your actual year of birth.\n";
        return 0;
    }

    int age = year - brith;
    cout << "You have " << age << " years old\n";
}
