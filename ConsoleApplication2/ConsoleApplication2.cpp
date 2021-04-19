#include <string>
#include <map>
#include <iostream>

using namespace std;

map<char, int> BuildCharContainer(string s) {
    map<char, int> res;
    for (char& c : s) {
        if (res.count(c) == 0)
            res.insert({ c, 1 });
        else
            res.find(c)->second += 1;
    }
    return res;
}

bool Annagram(string first, string second) { 
    if (BuildCharContainer(first) == BuildCharContainer(second))
        return true;
    else
        return false;
}

int main()
{
    int N;
    string first, second;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> first >> second;
        if (Annagram(first, second))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }


}
