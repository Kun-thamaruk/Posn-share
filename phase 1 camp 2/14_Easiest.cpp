#include<bits/stdc++.h>
using namespace std;
priority_queue <int> h;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,n,num;
    char a;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a;
        if(a=='B'){
            if(!h.empty())
                cout << "\n" << h.top()*-1,h.pop()  ;
            else
                cout << "-1" << "\n";
        }
            else if(a=='A'){
                cin >> num;
                h.push(num*-1);
            }
    }
    return 0;
}