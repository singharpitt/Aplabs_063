#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> freq, trophy;
    intmax_freq = 0;
    for (inti = 0; i < n; i++)
    {
        int age;
        cin >> age;
        freq[age]++;
        if (freq[age] > max_freq)
        {
            max_freq = freq[age];
            trophy[age] = i + 1;
        }
        else if (freq[age] == max_freq && trophy[age] == 0)
        {
            trophy[age] = i + 1;
        }
    }
    for (inti = 0; i < n; i++)
    {
        int age = trophy.begin()->first;
        intnum_wins = freq[age];
        cout << age << " " << num_wins << endl;
        freq[age] = -1;
        if (freq.begin()->second == -1)
        {
            freq.erase(freq.begin());
            trophy.erase(age);
            max_freq--;
        }
        else
        {
            freq.erase(freq.begin());
        }
    }
    return 0;
}
