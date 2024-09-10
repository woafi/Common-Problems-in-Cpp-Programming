#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int TotalPairs(vector<int> nums, int k)
    {
        // Code here
        int n = nums.size();

        set<pair<int, int> > s;

        // Pick all elements one by one
        for (int i = 0; i < n; i++) {
            // See if there is a pair of this picked element
            for (int j = i + 1; j < n; j++) {
                if (abs(nums[i] - nums[j]) == k) {
                    s.insert({ min(nums[i], nums[j]),
                               max(nums[i], nums[j]) });
                }
            }
        }

        return (int)s.size();
    }

int main(){
    optimize();
    
    return 0;
}