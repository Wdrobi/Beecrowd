#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int C, P, F;
    cin >> C >> P >> F;
    if (C * F <= P)
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }
    return 0;
}
