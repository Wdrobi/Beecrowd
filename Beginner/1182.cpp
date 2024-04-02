#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int L;
    cin >> L;
    char T[2];
    cin >> T;
    float m[12][12];
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
        }
    }
    if (T[0] == 'S')
    {
        float sum = 0;
        for (int k = 0; k < 12; k++)
        {
            sum += m[k][L];
        }
        cout << fixed << std::setprecision(1) << sum << endl;
    }
    if (T[0] == 'M')
    {
        float avr = 0;
        float sum = 0;
        for (int k = 0; k < 12; k++)
        {
            sum += m[k][L];
        }
        avr = sum / 12;
        cout << fixed << std::setprecision(1) << avr << endl;
    }
    return 0;
}
