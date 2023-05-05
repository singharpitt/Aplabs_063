int cookies(int k, vector<int> A)
{
    int operations = 0;
    priority_queue<int, vector<int>, greater<int>> pq(A.begin(), A.end()); // create a min-heap

    while (pq.top() < k && pq.size() > 1)
    { // while there are at least two cookies with sweetness less than k
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();

        intnewCookie = first + 2 * second;
        pq.push(newCookie);
        operations++;
    }

    if (pq.top() < k)
    {
        return -1; // it's not possible to achieve sweetness greater than k
    }

    return operations;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> A(n);
    for (inti = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int result = cookies(k, A);
    cout << result << endl;
    return 0;
}
