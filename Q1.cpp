#include <iostream>
using namespace std;
int main()
{
    // * * * * * *
    // *         *
    // * * * * * *
    //time complexity is O(k).
    int i = 0;
    while (i < 3)
    {
        cout << "*";
        int j = 0;
        while (j < 4)
        {
            if (i == 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
            j++;
        }
        cout << "*";
        cout << endl;
        i++;
    }

    return 0;
}