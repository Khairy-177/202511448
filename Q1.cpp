#include <iostream>
#include <string>

using namespace std;

void welcome(string name)
{
    cout << "Congratulations " << name;
}

int main()
{
    string name;

    cout << "Enter your name: ";
    cin >> name;

    welcome(name);

    return 0;
}
