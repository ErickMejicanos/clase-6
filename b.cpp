#include <iostream>
using namespace std;
int main()
{
    string nombres[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Introduzca un nombre" << "\n";
        cin >> nombres[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "\nLos nombres son: " << i+1 << nombres[i];
    }
    
    
}