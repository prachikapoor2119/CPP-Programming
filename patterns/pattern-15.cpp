#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i - 1;
        while (j <= i)
        {
            cout << ch << " ";
            j++;
        }

        cout << endl;
        i++;
    }
}


// example for n=5

        //  A
        //  B B
        //  C C C
        //  D D D D
        //  E E E E E