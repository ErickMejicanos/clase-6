#include <iostream>
using namespace std;
int main()
{
    float promedio;
    float nota[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "Introduzca la nota: " << i+1 << "\n";
        cin >> nota[i];
        promedio = promedio + nota[i];
    }
    cout << promedio / 6;

    return 0;
}