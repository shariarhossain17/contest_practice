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
    int node;
    Node *next;

public:
    Node(int val)
    {
        this->node = val;
        this->next = nullptr;
    }
};

Node *insert_array(vector<int> &v)
{
    Node *head = new Node(v[0]);
    Node *mover = head;

    for (int i = 1; i < v.size(); i++)
    {

        Node *new_val = new Node(v[i]);
        mover->next = new_val;
        mover = new_val;
    }

    return head;
}

Node *delete_node_x(Node *head, int x)
{
    Node *tmp = head;
    if (head->node == x)
    {
        head = tmp->next;
        delete tmp;
        return head;
    }

    Node *prev = NULL;

    while (tmp != NULL)
    {
        if (tmp->node == x)
        {
            prev->next = tmp->next;
            free(tmp);
            break;
        }
        prev = tmp;

        tmp = tmp->next;
    }
    return head;
}

Node *insert_tail(Node *head, int x)
{
    if (head == NULL)
    {
        Node *new_node = new Node(x);
        new_node->next = nullptr;
        return new_node;
    }

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    Node *new_node = new Node(x);

    tmp->next = new_node;

    new_node->next = nullptr;

    return head;
}

void print(Node *head)
{
    Node *tmp = head;

    while (tmp != nullptr)
    {
        cout << tmp->node << " ";

        tmp = tmp->next;
    }
    newLine;
}

bool search_in_ll(Node *head, int x)
{
    if (head == NULL)
        return false;

    Node *tmp = head;

    while (tmp != nullptr)
    {

        if (tmp->node == x)
            return true;
        tmp = tmp->next;
    }

    return false;
}

void solve()
{

    int n;
    cin >> n;

    vi v(n);
    array_input_int(v, 0, n);

    Node *head = insert_array(v);

    head = delete_node_x(head, 20);
    // Node *head = insert_tail(NULL, 10);
    print(head);
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