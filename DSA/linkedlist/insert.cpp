#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define array_input_int(a, o, n) \
    for (int i = o; i < n; i++)  \
    {                            \
        cin >> (a[i]);           \
    }

// struct Node
// {

// public:
//     int data;
//     Node *next;

// public:
//     Node(int val, Node *next1)
//     {
//         data = val;
//         next = next1;
//     }
// };

class Node
{

public:
    int data;
    Node *next;

public:
    Node(int val)
    {
        this->data = val;
        this->next = nullptr;
    }

public:
};

Node *convertArrayToLL(vector<int> &v)
{
    Node *head = new Node(v[0]);

    Node *mover = head;

    for (int i = 1; i < v.size(); i++)
    {
        Node *tmp = new Node(v[i]);
        mover->next = tmp;
        mover = tmp;
    }
    return head;
}

void traverse(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int size(Node *head)
{

    int cnt = 0;
    while (head != nullptr)
    {
        head = head->next;
        cnt++;
    }

    return cnt;
}

int search_in_ll(Node *head, int t)
{

    int ans = -1;

    while (head != nullptr)
    {
        if (head->data == t)
        {
            return head->data;
        }
        head = head->next;
    }
    return ans;
}

void solve()
{

    int n;
    cin >> n;
    vi v(n);
    array_input_int(v, 0, n);

    Node *head = convertArrayToLL(v);

    traverse(head);
    newLine;
    cout << size(head);
    newLine;
    cout << search_in_ll(head, 100);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}