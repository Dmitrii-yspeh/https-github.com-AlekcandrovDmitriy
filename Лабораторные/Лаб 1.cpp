#include <iostream>

using namespace std;

int main()
{
    {

        setlocale(LC_ALL, "Russian");
        float a = 1000, b = 0.0001;
        float e, q, w, s, k, p, o, x, n;

        e = a + b;  // e = 1000
        q = e * e;  // q = 1000000.20000001

        w = a * a;
        s = 2 * a;
        k = s * b;
        p = w - k;

        o = q - p;

        x = b * b;

        n = o / x;

        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "e = " << e << endl;
        cout << "q = " << q << endl;
        cout << "w = " << w << endl;
        cout << "s = " << s << endl;
        cout << "k = " << k << endl;
        cout << "p = " << p << endl;
        cout << "o = " << o << endl;
        cout << "x = " << x << endl;
        cout << "n = " << n << endl;

        cout << "данное значение используется при 'float', при этом в входных данных переменной а присвоено значение 1000, переменной b присвоено значение 0.0001, которое изменяется в еденицу" << endl;

    }
    {

        setlocale(LC_ALL, "Russian");
        double a = 1000, b = 0.0001;
        double e, q, w, s, k, p, o, x, n;

        e = a + b;  // e = 1000
        q = e * e;  // q = 1000000.20000001

        w = a * a;
        s = 2 * a;
        k = s * b;
        p = w - k;

        o = q - p;

        x = b * b;

        n = o / x;

        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "e = " << e << endl;
        cout << "q = " << q << endl;
        cout << "w = " << w << endl;
        cout << "s = " << s << endl;
        cout << "k = " << k << endl;
        cout << "p = " << p << endl;
        cout << "o = " << o << endl;
        cout << "x = " << x << endl;
        cout << "n = " << n << endl;

        cout << "данное значение используется при 'double', при этом в входных данных переменной а присвоено значение 1000, переменной b присвоено значение 0.0001, которое не изменяется в еденицу" << endl;

    }
}