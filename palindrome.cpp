#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(vector<int> &nums, int n)
    {
        if (n > (nums.size() / 2))
            return true;

        if (nums[n] == nums[nums.size() - n - 1])
            return true && check(nums, n + 1);
        else
        return false;
    }
};

int main()
{
    Solution question;
    vector<int>vec = {} ;
    if(question.check(vec,0))
    cout << "yes";
    else
    cout << "no";

    return 0;
}