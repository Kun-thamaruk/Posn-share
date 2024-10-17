ย/*
    TASK: Playbase
    AUTHOR: Thamarak krutkerd
    SCHOOL: RYW
*/

#include <stdio.h>
#include <string.h>

char S1[1111111],S2[1111111],TEMP[1111111]; 

int to10based (char S[],int B) {
    int i,k,n=0;
    for (i=0,k=strlen(S)-1;i<strlen(S);i++,k--) {
        if (S[i]-'0'<10) n+=(S[i]-'0')*pow(B,k);
        else n+=(S[i]-'A'+10)*pow(B,k);
    }
    return n;
}

void toKbase(int N,int B){
    int n=N,t=0;
    while (n>0){
        int r=n%B;
        n=n/B;
        if (r<10) TEMP[t++] = r+'0';
        else TEMP[t++] = r-10+'A';
    }
}

int main() {
    int K;
    scanf("%d %s %s",&K,S1,S2);
    int N1=to10based(S1,K),N2=to10based(S2,K);
    printf("%d\n",N1+N2);
    toKbase(N1+N2,K);
    int i;
    for (i=strlen(TEMP)-1;i>=0;i--) printf("%c",TEMP[i]);   
    return 0;
}