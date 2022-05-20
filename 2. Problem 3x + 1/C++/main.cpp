#include <iostream>
using namespace std;
int targetNumber = 5000, j;
int main()
{
    for (int i = 10; i < targetNumber + 1; i++)
    {
        cout << "========== " << i << " ==========" << endl;
        j = i;
        while (j > 2)
        {
            if (j % 2 == 0)
            {
                j /= 2;
                cout << j << endl;
            }
            else
            {
                j = 3 * j + 1;
                cout << j << endl;
            }
        }
        cout << j / 2 << endl;
    }
    return 0;
}