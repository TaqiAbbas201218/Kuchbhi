#include <iostream>
using namespace std;
int main()
{
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {

            if (col % 2 == 0)
            {
                cout << "1"
                     << " ";
            }
            else
            {
                cout << "0"
                     << " ";
            }
        }
        cout << endl;
    }
    return 0;
}