#include <bits/stdc++.h>
using namespace std;

char mail[1000][1000];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q,n,m,b,cnt;
    cin >> q;
    while (q--) {
        cin >> n >> m;
        for (int i=0;i<n;i++) {cin >> mail[i];}
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                b=0,cnt = 0;
                while (1) {
                    if (cnt<m&&tolower(mail[i][j])==tolower(mail[i][cnt])&&cnt!=j) {b=1;break;}
                    if (cnt<n&&tolower(mail[i][j])==tolower(mail[cnt][j])&&cnt!=i) {b=1;break;}
                    if (cnt>m&&cnt>n) {break;}
                    cnt++;
                }
                if (b==1) {continue;}
                cout << mail[i][j];
            }
        }
        cout << "\n";
    }
    return 0;
}
/*
2
4 3
pxe
OsN
Tte
exE
6 4
BuRg
EXit
TxrG
eKuy
OobO
YUrY
*/