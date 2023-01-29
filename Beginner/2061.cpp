#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, M;
    char temp[10];
    cin >> N >> M;
    while (M--)
    {
        cin >> temp;
        if (temp[0] == 'f')
        {
            N++;
        }
        else
            N--;
    }
    cout << N << endl;
    return 0;
}
