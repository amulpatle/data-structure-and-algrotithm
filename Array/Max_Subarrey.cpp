#include <iostream>
#include <vector>

using namespace std;
class solution
{
public:
    int maxsubarrey(vector<int> &arr)
    {
        int sum = 0;
        int maxi = INT16_MIN;
        for (auto it : arr)
        {
            sum += it;
            maxi = max(sum, maxi);
        }
        return maxi;
    }
};
int main()
{
    solution s;

    vector<int> arr = {1, 3, -5, 6, 4};
    cout << s.maxsubarrey(arr);

    return 0;
}