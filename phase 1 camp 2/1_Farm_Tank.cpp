#include <bits/stdc++.h>
using namespace std;

long long Ti[100010];

int main() {
    int N;
    long long M;
    cin >> N >> M;
    for (int i=0;i<N;i++) {cin >> Ti[i];}
    long long l=0,h=1e18;
    while (l<h) {
        long long mid=l+(h-l)/2;
        long long sum = 0;
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