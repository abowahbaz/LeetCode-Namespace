#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool isPowerOfTwo(int n) // TODO : Code your solution here
    {
        if (n <= 0) return false;
        return (n & (n - 1)) == 0;
    }
};


#if LOCAL // ! LOCAL should be defined in the compiler args 
#include<leetcode.h>
using namespace leet;
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // TODO : Read input and call your function here


    return 0;
}
#endif


static const int ios = []() {
    cin.tie(nullptr)->sync_with_stdio(false);
    return 0;
    }();




