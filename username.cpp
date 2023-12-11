#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int n, a, l = 3, sum = 180;
    bool yes = false;
    cin >> n;

    while (n--)
    {
        cin >> a;
        while (l < 361)
        {
            if ((sum % l) == 0)
            {
                if (a == (sum / l))
                {
                    cout << "YES" << endl;
                    yes = true;
                    break;
                }
            }

            l++;
            sum = (l - 2) * 180;
        }
        if (!yes)
        {
            cout << "NO" << endl;
        }
        sum = 180;
        l = 3;
        yes = false;
    }
    return 0;
}