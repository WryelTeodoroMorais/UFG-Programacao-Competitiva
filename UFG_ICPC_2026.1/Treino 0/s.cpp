#include <iostream>
using namespace std;

int main()
{
    int n, one = 0, two = 0, num;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num > one)
        {
            two = one;
            one = num;
        }
        else if (num > two && num != one)
            two = num;
    }
    
    cout << two << endl;

    return 0;
}