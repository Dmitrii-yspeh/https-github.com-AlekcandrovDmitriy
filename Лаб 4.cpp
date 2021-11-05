#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int d[] = { 55, 47, 93, 18, 22}, arr[8];
    for (int i = 0; i < 5; i++)
    {
        cout << d[i] << " ";
    }
    cout << "\nВедите номер ячейки, которую надо удалить, номер может быть от 1 до 5";
    cout << "\nНомер ячейки: ";
    int k;
    cin >> k;
    int arr2[5];
    for (int i = 0; i < 5; i++)
    {
        if (i != k - 1)
        {
            arr2[i] = d[i];
            cout << arr2[i] << " ";   //<---
        }
    }
    cout << endl << endl << "Массив после вмещения нулей: ";
    {
        for (int i = 0; i < 4; i++)
        {
            arr[2 * i] = arr2[i];
            if (!(arr2[i] % 2))
            {
                arr[(2 * i) + 1] = 0;
            }
            else
            {
                arr[(2 * i) + 1] = 0;
            }
        }

        for (int r = 0; r < 7; r++)
        {
            if (r == 0)
            {
                cout << arr[0] << " ";
            }
                if (!(arr[r] % 2))
                {
                    cout << arr[r + 1] << " ";
                }
                else
                {
                    cout << "";
                }
            
        }
    }
    cout << endl;
}
