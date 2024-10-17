  #include <stdio.h>
  #include <stdlib.h>

  int a[1010],from_front[1010],from_back[1010];
  int main() {
    int q;
    scanf("%d",&q);
    while (q--) {
      int n,i;
      scanf("%d",&n);
      for (i=1;i<=n;i++) scanf("%d",&a[i]);
      from_back[n+1] = 0;
      for (i=1;i<=n;i++){
        if (a[i] == 0) from_front[i] = from_front[i-1]+1;
        else from_front[i] = 0;
      }
      for (i=n;i>=1;i--){
        if (a[i] == 0) from_back[i] = from_back[i+1]+1;
        else from_back[i] = 0;
      }
      int ans = -1,max = 0;
      for (i=1;i<=n;i++){
        if (from_back[i] == from_front[i] && max < from_back[i]) max = from_back[i],ans = i-1;
      }
      printf("%d\n",ans);
    }
    return 0;
  }
