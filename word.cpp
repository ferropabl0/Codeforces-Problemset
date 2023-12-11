#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    int low = 0, up = 0;
    string word;
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == tolower(word[i]))
        {
            low++;
        }
        else
        {
            up++;
        }
    }

    if (low < up)
    {
        for (int i = 0; i < word.length(); i++)
        {
            word[i] = toupper(word[i]);
        }
    }
    else
    {
        for (int i = 0; i < word.length(); i++)
        {
            word[i] = tolower(word[i]);
        }
    }
    cout << word;
    return 0;
}