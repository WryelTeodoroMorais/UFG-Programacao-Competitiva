#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <string, int> strings = {{"H", 0}, {"2B", 0}, {"3B", 0}, {"HR", 0}};
    string a, b, c, d;
    cin >> a >> b >> c >> d;

    strings[a]++;
    strings[b]++;
    strings[c]++;   
    strings[d]++;
    
    if (strings["H"] == 1 && strings["2B"] == 1 &&
        strings["3B"] == 1 && strings["HR"] == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}