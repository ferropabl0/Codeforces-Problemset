#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int pos, curr, res = 0;
    cin >> pos;
    curr = pos;
    for (int i = 5; i >= 1; i--)
    {
        while (curr >= i)
        {
            res++;
            curr -= i;
        }
        if (curr == 0)
        {
            break;
        }
    }
    cout << res;
    return 0;
}