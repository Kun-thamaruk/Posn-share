#include <bits/stdc++.h>
using namespace std;

int a[35];
int main() {
        int q;
        scanf("%d",&q);
        while (q--) {
            int n,even=0,odd=0;
            scanf("%d",&n);
            for (int i=0;i<n;i++) {
                scanf("%d",&a[i]);
                if(i%2==0&&a[i]) even++;
                if(i%2==1&&a[i]) odd++;
            }
            //cerr << odd <<' '<< even;
            if ((n%2==1)||abs(odd-even)<=1) printf("YES\n");
            else printf("NO\n");
        }
        return 0;
}