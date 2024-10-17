#include <bits/stdc++.h>
using namespace std;
long long Ti[1000010];
int main() {
    long long M,N;
    cin >> N >> M;
    for (int i=0;i<N;i++) {cin >> Ti[i];}
    long long l=0,h=1e18;
    while (l<h) {
        long long mid=l+(h-l)/2,sum=0;
        for (int i=0;i<N;i++) {
            sum += mid/Ti[i];
            if (sum >= M) {break;}
        }
        if (sum < M) {l = mid+1;}
        else {h = mid;}
    }
    cout << l;
    return 0;
}