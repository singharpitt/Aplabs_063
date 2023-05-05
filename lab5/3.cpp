void findFour()
{
    unordered_map<int, pair<int, int>> mp;
    for (int i = 1; i <= 29; i++)
        for (int j = 2; j <= 30; j++)
            mp[i + j] = {i, j};
    for (int i = 1; i <= 29; i++)
    {
        for (int j = 2; j <= 30; j++)
        {
            int sum = i + j;
            if (mp.find(56 - sum) != mp.end())
            {
                pair<int, int> p = mp[56 - sum];
                if (p.first != i && p.first != j && p.second != i && p.second != j)
                    cout << i << " " << j << " " << p.first << " " << p.second << endl;
            }
        }
