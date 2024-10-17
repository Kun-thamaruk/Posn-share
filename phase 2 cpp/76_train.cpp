#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
    int num;
    struct node *left, *right;
} node;
node *newnode(int num)
{
    node *newNode;
    newNode = (node *)malloc(sizeof(node));
    newNode->num = num;
    newNode->left = newNode->right = NULL;
    return newNode;
}

char opr[20];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    node  *head, *run, *last, *use;
    head = newnode(999);
    run = newnode(0);
    last = newnode(0);
    use = newnode(0);
    run = last = head;
    while (n--) {
        cin >> opr;
        if (opr[0] == 'h')  {
            run = head;
        }
        else if (opr[0] == 'n'){
            if (run->right == NULL)
                continue;
            run = run->right;
        }
        else if (opr[0] == 't') {
                run = last;
        }
        else if (opr[0] == 'a') {
            int num;
            cin >> num;
            use = newnode(num);
            if (run->right == NULL) {
                use->left = run;
                run->right = use;
                last = use;
            }
            else {
                run->right->right = use;
                use->right = run->right;
                run->right = use;
                use->left = run;
            }
        }
        else if (opr[0]=='r') {
            if (run == last) continue;
            use = run->right;
            if (use->right != NULL) {
                run->right = use->right;
                run->right->left = run;
            }
            else {
                run->right = NULL;
            }
        }
        else if (opr[0]=='c') {
            cout << run->num << ' ';
        }
        else if (opr[0]=='l') {
            while (run->right != NULL) {
                cout << run->num << ' ';
                run = run->right;
            }
            cout << run->num << ' ';
        }
    }
    return 0;
}