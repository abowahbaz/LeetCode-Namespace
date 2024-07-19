#include <bits/stdc++.h>
using namespace std;
#define LOCAL 1
//* Set LOCAL to 1 to run the code on local machine

class Solution
{
    public:
    Solution()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int exampleFunction(int a, int b);
};

#if LOCAL
#include <leetcode.h>
using namespace leet;
using namespace debug;
signed main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    return 0;
}
#endif

int Solution::exampleFunction(int a, int b)
{
    return a + b;
}