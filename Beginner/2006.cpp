#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T, A, B, C, D, E, c = 0;
    cin >> T;
    cin >> A >> B >> C >> D >> E;
    if (T == A)
    {
        c++;
    }
    if (T == B)
    {
        c++;
    }
    if (T == C)
    {
        c++;
    }
    if (T == D)
    {
        c++;
    }
    if (T == E)
    {
        c++;
    }
    cout << c << endl;
    return 0;
}
