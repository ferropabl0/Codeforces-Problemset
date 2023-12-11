#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    vector<char> distinct;
    char curr;
    int num = 0, i = 0;
    while (cin >> curr)
    {
        if (find(distinct.begin(), distinct.end(), curr) == distinct.end())
        {
            distinct.push_back(curr);
        }
    }

    num = distinct.size();

    if ((num % 2) == 1)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
    return 0;
}