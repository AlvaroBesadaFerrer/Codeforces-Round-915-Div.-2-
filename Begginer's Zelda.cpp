#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cp;
    cin >> cp;
    while (cp--)
    {
        int n;
        cin >> n;
        vector<int> v;

        for (int i = 0; i <= n; i++)
        {
            v.push_back(0);
        }
        for (int i = 0; i < n - 1; i++)
        {

            int a;
            cin >> a;
            v[a] += 1;
            cin >> a;
            v[a] += 1;
        }
        int x = count(v.begin(), v.end(), 1);
        cout << x / 2 + (x % 2) << "\n";
    }
}