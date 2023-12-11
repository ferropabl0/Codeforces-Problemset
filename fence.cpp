#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int n, k, aux, idx = 0, sum = 0, j, min;
    vector<int> heights;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        cin >> aux;
        heights.push_back(aux);
        sum += aux;
    }
    min = sum;
    j = 1;

    for (int l = k; l < n; l++)
    {
        cin >> aux;
        sum = sum + aux - heights[0];

        if (sum < min)
        {
            min = sum;
            j = l - k + 2;
        }

        heights.push_back(aux);
        heights.erase(heights.begin());
    }

    cout << j;
    return 0;
}