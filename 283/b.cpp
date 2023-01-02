#include <iostream>

using namespace std;

int main(void)
{
    int n, q;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cin >> q;

    int val1, val2, val3;
    for (int i = 0; i < q; i++)
    {
        cin >> val1;
        if (val1 == 1)
        {
            cin >> val2 >> val3;
            array[val2 - 1] = val3;
        }
        else if (val1 == 2)
        {
            cin >> val2;
            cout << array[val2 - 1] << "\n";
        }
    }
    return 0;
}