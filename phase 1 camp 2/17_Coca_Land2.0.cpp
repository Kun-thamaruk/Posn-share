/*#include <bits/stdc++.h>
using namespace std;
struct HEAP {
    int buty,death,to,type;
    bool operator < (const HEAP &o) const {
        if (buty != o.buty) {return buty > o.buty;
        return type > o.type;}
    }
};
priority_queue <HEAP> pq;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        int opr;
        cin >> opr;
        if (opr == 4) {
            while (!pq.empty() && pq.top().death <= i) {
                HEAP top = pq.top();
                pq.pop();
                if (top.type == 3) {
                    top.buty = top.to;
                    top.death = n+1;
                    top.to = 0;
                    top.type = 1;
                    pq.push(top);
                }
            }
            if (pq.empty()) {
                cout << "GREEN\n";
                continue;
            }
            cout << "\n";
            cout << pq.top().buty;
            pq.pop();
            continue;
        }
        HEAP plant = {0,n+1,0,opr};
        if (opr == 1) {
            int buty,death;
            cin >> buty >> death;
            plant.buty = buty;
            plant.death = death;
            //plant.type = 2;
        }
        if (opr == 2) {
            int buty;
            cin >> buty;
            plant.buty = buty;
            //plant.type = 3;
        }
        if (opr == 3) {
            int buty,death,to;
            cin >> buty >> death >> to;
            plant.buty = buty;
            plant.to = to;
            plant.death = death;
            //plant.type = 1;
        }   
        pq.push(plant);
    }
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
struct HEAP{
int beauty,death,to,type;
bool operator < (const HEAP&o)const{
if(beauty != o.beauty)
    return beauty > o.beauty;
    return type > o.type;
}
};
priority_queue<HEAP>pq;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin >> n;
for(int i=0;i<n;i++){
    int opr;
    cin >> opr;
    if(opr==4){
        while(!pq.empty()&&pq.top().death<=i){
            HEAP top = pq.top();
            pq.pop();
            if(top.type==3){
                top.beauty=top.to;
                top.death=n+1;
                top.to=0;
                top.type=1;
                pq.push(top);
            }
        }
        if(pq.empty()){
            cout << "GREAN" << "\n";
            continue;
        }
        cout << "\n" << pq.top().beauty;
        pq.pop();
        continue;
    }
    HEAP plant ={0,n+1,0,opr};
    if(opr==1){
        int beauty,death;
        cin >> beauty >> death;
        plant.beauty=beauty;
        plant.death=death;
    }
    if(opr==2){
        int beauty;
        cin >> beauty;
        plant.beauty=beauty;
    }
    if(opr==3){
        int beauty,death,to;
        cin >> beauty >> death >> to;
        plant.beauty=beauty;
        plant.death=death;
        plant.to=to;
    }
    pq.push(plant);
}
return 0;
}