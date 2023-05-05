#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    stringpref;
    cin >> pref;
    vector<int> seats(n, 0);
    for (inti = 0; i < q; i++)
    {
        intpos;
        cin >> pos;
        if (seats[pos - 1] != 0)
        {
            cout << seats[pos - 1] << endl;
            continue;
        }
        intlen = 0, start = -1;
        for (int j = 0; j < n; j++)
        {
            if (seats[j] == 0)
            {
                int left = j - 1 >= 0 ? seats[j - 1] : -1;
                int right = j + 1 < n ? seats[j + 1] : -1;
                intdist = min(j - left, right - j);
                if (dist > len)
                {
                    len = dist;
                    start = j;
                }
            }
        }
        intcenter;
        if (len % 2 == 0)
        {
            center = start + len / 2 - (pref == "left");
        }
        else
        {
            center = start + len / 2;
        }
        seats[center] = i + 1;
        cout << i + 1 << endl;
    }
    return 0;
}
