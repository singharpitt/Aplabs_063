class Solution {
public:
intlastStoneWeight(vector<int>& stones) 
{
priority_queue<int>maxHeap(stones.begin(), stones.end());
while (maxHeap.size() > 1) {
            // Get the two heaviest stones
int y = maxHeap.top();
maxHeap.pop();
int x = maxHeap.top();
maxHeap.pop();
if (x != y) {
maxHeap.push(y - x);
            }
        }
if (maxHeap.empty()) {
return 0;
        } else {
returnmaxHeap.top();
        }
    }
};
