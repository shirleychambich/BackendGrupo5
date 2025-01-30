#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout <<"\n ingrese lado A:";
    cin >> a;
    cout << "\n ingrese lado B:";
    cin >> b;
    cout << "\n ingrese lado C:";
    cin >> c;
    if (a + b < c || a + c < b || b + c < a)
        cout << "\n No forman un triangulo";
    else
    {
        if (a == b && a == c && b == c)
            cout << "\n Forman un triángulo equilatero";
        else
        {
            if (a == b || a == c || b == c)
                cout << "\n Forman un triángulo isóceles";
            else
            {
                if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
                    cout << "\n Forman un triángulo rectángulo";
                else
                    cout << "\n Forman un triángulo escaleno";
            }
        }
    }
    return 0;
}