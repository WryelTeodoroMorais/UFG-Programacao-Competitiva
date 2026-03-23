#include <iostream>
using namespace std;

int main()
{
    char *s, *t;
    bool x = true;
    cin >> s >> t;
    int aux = s[0] - t[0];
    
    for (int i = 1; s[i] != '\0'; i++)
        if (s[i] - t[i] != aux)
        {
            x = false;
            break;
        }

    cout << (x ? "Yes" : "No") << endl;

    return 0;
}