#include <bits/stdc++.h>
using namespace std;

char a[10100];
stack<int> price,opr;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int top,num1,num2,op,nowopr;
    cin >> a;
    int len = strlen(a);
    for (int i=0;i<len;i++) {
        if (isalpha(a[i])) {price.push(20);}
        else if (a[i]=='[') {opr.push(-1);}
        else if (a[i]==']') {
            while (!opr.empty()&&opr.top()!=-1) {
                top = opr.top();
                opr.pop();
                num1 = price.top();
                price.pop();
                num2 = price.top();
                price.pop();
                price.push(((num1+num2)*(top+100))/100);
            }
            opr.pop();
        }
        else {
            op = a[i]-'0';
            if (op==1) {nowopr=4;}
            else if (op==2) {nowopr=8;}
            else if (op==3) {nowopr=16;}
            while (!opr.empty()&&nowopr<=opr.top()) {
                top = opr.top();
                opr.pop();
                num1 = price.top();
                price.pop();
                num2 = price.top();
                price.pop();
                price.push(((num1+num2)*(top+100))/100);
            }
            opr.push(nowopr);
        }
    }
    while (!opr.empty()) {
        top = opr.top();
        opr.pop();
        num1 = price.top();
        price.pop();
        num2 = price.top();
        price.pop();
        price.push(((num1+num2)*(top+100))/100);
    }
    cout << price.top() << "\n";
    return 0;
}