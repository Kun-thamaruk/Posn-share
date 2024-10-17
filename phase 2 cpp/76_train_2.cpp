#include <bits/stdc++.h>
using namespace std;

list <int> w;
list <int>::iterator it1,it2;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    string opr;
    w.push_back(999);
    it1 = w.begin();
    cin >> n;
    while (n--) {
        cin >> opr;
        if (opr == "add") {
            cin >> m;
            it2 = it1;
            it2++;
            w.insert(it2,m);
        }
        else if (opr == "next") {
            it2 = it1;
            it2++;
            if (it2!=w.end()) {it1++;}
        }
        else if (opr == "head") {
            it1 = w.begin();
        }
        else if (opr == "tail") {
            it1 = w.end();
            it1--;
        }
        else if (opr == "remove") {
            it2=it1;
            it2++;
            if (it2!=w.end()) {
                it1++;
                it1 = w.erase(it1);
                it1--;
            }
        }
        else if (opr == "call") {
            cout << *it1 << "\n";
        }
        else if (opr == "list") {
            for (;it1!=w.end();it1++) {
                cout << *it1 << " ";
            }
            cout << "\n";
            it1--;
        }
    }
    return 0;
}