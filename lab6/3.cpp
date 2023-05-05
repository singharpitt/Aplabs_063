classMedianFinder
{
public:
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    MedianFinder()
    {
    }
    voidaddNum(intnum)
    {
        if (maxHeap.empty() || num <= maxHeap.top())
        {
            maxHeap.push(num);
        }
        else
        {
            minHeap.push(num);
        }
        if (maxHeap.size() > minHeap.size() + 1)
        {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        else if (minHeap.size() > maxHeap.size() + 1)
        {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }
    doublefindMedian()
    {
        int m = maxHeap.size();
        int n = minHeap.size();
        if (m == n)
        {
            return (maxHeap.top() + minHeap.top()) / 2.0;
        }
        else if (m > n)
        {
            returnmaxHeap.top();
        }
        else
        {
            returnminHeap.top();
        }
    }
};
