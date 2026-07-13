#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    long long n, sum = 0, ans = 0;
    cin >> n;
    vector <long long> nums(n);
    
    for (int i=0; i<n; i++)
        cin >> nums[i];
    
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++) 
    {
        ans += nums[i] * i - sum;
        sum += nums[i];
    }

    cout << ans << '\n';

    return 0;
}