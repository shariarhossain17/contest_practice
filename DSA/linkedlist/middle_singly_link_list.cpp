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

class Node
{

public:
    int val;
    Node *next;

public:
    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};
Node *insert_array(vector<int> &v)
{

    Node *head = new Node(v[0]);

    Node *mover = head;

    for (int i = 1; i < v.size(); i++)
    {
        Node *tmp = new Node(v[i]);

        mover->next = tmp;

        mover = mover->next;
    }

    return head;
};

int count_node(Node *head)
{

    Node *tmp = head;
    int cnt = 0;

    while (tmp != nullptr)
    {
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
}

void print(Node *head)
{

    Node *tmp = head;

    while (tmp != nullptr)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

Node *middle_val(Node *head, int mid)
{

    Node *tmp = head;

    int cnt = 0;

    while (tmp != nullptr)
    {
        cnt++;

        if (cnt == mid)
            break;

        tmp = tmp->next;
    }

    return tmp;
}

Node *reverse_singly_list(Node *head)
{
    stack<int> st;

    Node *tmp = head;

    while (tmp != nullptr)
    {
        st.push(tmp->val);
        tmp = tmp->next;
    }

    Node *insert_val = head;
    while (!st.empty())
    {
        insert_val->val = st.top();
        st.pop();
        insert_val = insert_val->next;
    }

    return head;
}

Node *reverse_iterate_way(Node *head)
{
    Node *prev = NULL;

    Node *tmp = head;

    while (tmp != nullptr)
    {
        Node *next = tmp->next;
        tmp->next = prev;
        prev = tmp;
        tmp = next;
    }

    return prev;
}
void solve()
{
    int n;
    cin >> n;
    vi v(n);

    array_input_int(v, 0, n);

    Node *head = insert_array(v);

    // int mid = (count_node(head) / 2) + 1;

    // Node *mid_node = middle_val(head, mid);

    // cout << mid_node->val;

    // head = reverse_singly_list(head);
    head = reverse_iterate_way(head);
    print(head);
}

Node operation(Node *head)
{

    Node *tmp = head;

    while (tmp != nullptr)
    {

        tmp = tmp->next;
    }
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