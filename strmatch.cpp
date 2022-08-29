#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mainString, search;
    int result = -1, i = 1;
    cout<<"Enter Original String:";
    getline(cin, mainString);
    cout<<"Enter Pattern String:";
    getline(cin, search);
    do
    {
        result = mainString.find(search, result + 1);
        if (result != -1)
            cout<< "found at " << result<<"\t";
        i++;
    } while (result >= 0);
    return 0;
}