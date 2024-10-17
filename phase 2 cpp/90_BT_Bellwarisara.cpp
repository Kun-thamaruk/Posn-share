#include <bits/stdc++.h>
using namespace std;

char mail[1000][1000],ans[1000],tempp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int q,n,m,b,cnt;
    cin >> q;
    while (q--) {
        cin >> n >> m;
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                cin >> mail[i][j];
                //mail[i][j] = tolower(tempp);
            }
        }
        for (int i=0;i<n;i++) {
            cin >> mail[i];
        }
        cnt = 0;
        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                b=0;
                //cout << mail[i][j];
                for (int k=0;k<m;k++) {
                    //cout << mail[i][k];
                    if (tolower(mail[i][j])==tolower(mail[i][k])&&k!=j) {b=1;break;}
                }
                if (b==1) {continue;}
                for (int k=0;k<n;k++) {
                    //cout << mail[k][j];
                    if (tolower(mail[i][j])==tolower(mail[k][j])&&k!=i) {b=2;break;}
                }
                if (b==2) {continue;}
                //ans[cnt++] = mail[i][j];
                //cout << ans[i] << "\n";
            }
        }
       for (int i=0;i<strlen(ans);i++) {
            cout << ans[i];
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