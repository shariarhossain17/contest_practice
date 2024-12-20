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
    int data;
    Node *next;
    Node *previous;

public:
    Node(int val)
    {
        this->data = val;
        this->next = nullptr;
        this->next = nullptr;
    }
};

Node *insert_head(Node *head, int val)
{
    Node *tmp = new Node(10);
    if (head != NULL)
    {
        tmp->next = head;
        head->previous = tmp;
    }

    return tmp;
}

Node *insert_array(vector<int> &v)
{

    Node *head = new Node(v[0]);

    Node *tmp = head;

    for (int i = 1; i < v.size(); i++)
    {
        Node *new_node = new Node(v[i]);
        new_node->previous = tmp;
        tmp->next = new_node;
        tmp = new_node;
    }

    return head;
}

void print_dll(Node *head)
{

    Node *tmp = head;
    while (tmp != nullptr)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
}

Node *delete_head(Node *head)
{

    if (head == NULL)
        return NULL;

    if (head->next == NULL)
    {
        delete head;
        return nullptr;
    }

    Node *tmp = head;

    head = tmp->next;
    head->previous = nullptr;
    free(tmp);

    return head;
}

Node *remove_tail(Node *head)
{

    if (head == NULL)
        return head;

    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }

    Node *tmp = head;

    Node *prev = NULL;
    while (tmp->next != nullptr)
    {
        tmp = tmp->next;
    }

    Node *new_tail = tmp->previous;
    new_tail->next = nullptr;
    free(tmp);

    // free(tmp->next);
    // tmp->next = nullptr;
    return head;
}
void solve()
{
    // Node *head = nullptr;
    // head = insert_head(head, 10);

    int n;
    cin >> n;
    vi v(n);
    array_input_int(v, 0, n);

    Node *head = insert_array(v);

    head = remove_tail(head);

    print_dll(head);
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