#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool buka(int a, string b, string c)
{

    if (b.length() != c.length())
        return false;
    int s1 = (c[0] - b[0] + 10) % 10;
    for (int i = 1; i < a; i++)
    {
        int s2 = (c[i] - b[i] + 10) % 10;
        if (s1 != s2)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a;
    string b, c;

    if (cin >> a >> b >> c)
    {
        if (buka(a, b, c))
        {
            cout << "YA" << endl;
        }
        else
        {
            cout << "TIDAK" << endl;
        }
    }
    return 0;
}
