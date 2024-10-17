#include <bits/stdc++.h>
using namespace std;

const int MaxN = 1510;

int a[MaxN][MaxN];

struct A{
    int idx;
    bool operator < (const A&o) const {
        if (a[idx][o.idx] != idx) {return true;}
        return false;
    }
};

int main() {
    int n,q;
    return 0;
}