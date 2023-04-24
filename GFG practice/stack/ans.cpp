#include <bits/stdc++.h>
using namespace std;

vector<int> nearestSmallerTower(vector<int> arr)
{

    int n = arr.size();
    vector<int> prev(n);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        while (st.empty() == false && arr[st.top()] >= curr)
        {
            st.pop();
        }
        prev[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }

    while (st.empty() == false)
        st.pop();

    vector<int> right(n, -1);
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        while (st.empty() == false && arr[st.top()] > curr)
        {
            right[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        int lIdx = prev[i];
        int rIdx = right[i];
        if (lIdx == -1 || rIdx == -1)
        {
            res[i] = max(lIdx, rIdx);
        }
        else if (i - lIdx == rIdx - i)
        {
            res[i] = (arr[lIdx] <= arr[rIdx]) ? lIdx : rIdx;
        }
        else
        {
            res[i] = (i - lIdx < rIdx - i) ? lIdx : rIdx;
        }
    }

    return res;
}

int main()
{
    return 0;
}