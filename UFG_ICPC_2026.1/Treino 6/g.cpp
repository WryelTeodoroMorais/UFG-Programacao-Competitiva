#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector <int> v1(n), v2(n);

    for (int i = 0; i < n; i++)
        cin >> v1[i];

    for (int i = 0; i < n; i++)
        cin >> v2[i];
    
    cout << *max_element(v1.begin(), v1.end()) + *max_element(v2.begin(), v2.end()) << "\n";
}