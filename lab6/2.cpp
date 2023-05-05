#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> freqMap;
        for (intnum : nums)
        {
            freqMap[num]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for (auto &pair : freqMap)
        {
            intnum = pair.first;
            intfreq = pair.second;
            minHeap.push({freq, num});
            if (minHeap.size() > k)
            {
                minHeap.pop();
            }
        }
        vector<int> result(k);
        inti = 0;
        while (!minHeap.empty())
        {
            result[i++] = minHeap.top().second;
            minHeap.pop();
        }
        return result;
    }
};
