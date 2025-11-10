#include <iostream>
#include<Windows.h>
using namespace std;

int main()
{
   
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
    int a, b, c, n, i;

    cout << "Послідовність №3 (a[n+2] = a[n+1] + a[n])" << endl;
    cout << "Введіть кількість чисел n = ";
    cin >> n;

    a = 1;
    b = 2;

    cout << a << endl;
    cout << b << endl;

    for (i = 3; i <= n; i++)
    {
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }

    return 0;
}
