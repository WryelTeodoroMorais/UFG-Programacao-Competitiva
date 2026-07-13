#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long int l, r;
        cin >> l >> r;
        cout << endl <<l << " " << 2*l;
    }

    cout << endl;

    return 0;
}