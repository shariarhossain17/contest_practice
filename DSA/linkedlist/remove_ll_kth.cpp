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
    Node *prev;

public:
    Node(int data)
    {
        this->val = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

Node *insertArray(vector<int> &v)
{
    Node *head = new Node(v[0]);
    Node *tmp = head;

    for (int i = 1; i < v.size(); i++)
    {
        Node *new_node = new Node(v[i]);
        new_node->prev = head;
        tmp->next = new_node;
        tmp = new_node;
    }

    return head;
};

void print(Node *head)
{

    Node *tmp = head;

    while (tmp != nullptr)
    {
        cout << tmp->val << " ";

        tmp = tmp->next;
    }
}

Node *remove_head(Node *head)
{
    Node *tmp = head;

    head = tmp->next;
    head->prev = nullptr;
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

    Node *new_tail = tmp->prev;
    new_tail->next = nullptr;
    free(tmp);

    // free(tmp->next);
    // tmp->next = nullptr;
    return head;
}
Node *remove_kth_node(Node *head, int k)
{

    int count = 0;

    Node *kNode = head;
    while (kNode != NULL)
    {
        count++;
        if (count == k)
        {
            break;
        }
        kNode = kNode->next;
    }
    Node *prev = kNode->prev;
    Node *front = kNode->next;

    if (prev == NULL && front == NULL)
    {
        delete kNode;
        return NULL;
    }
    else if (prev == NULL)
    {
        return remove_head(head);
    }
    else if (front == NULL)
    {
        return remove_tail(head);
    }

    prev->next = front;
    front->prev = prev;

    kNode->next = NULL;
    kNode->prev = NULL;

    delete kNode;

    return head;
}

void solve()
{
    int n;
    cin >> n;

    vi v(n);
    array_input_int(v, 0, n);

    Node *head = insertArray(v);

    head = remove_kth_node(head, 2);

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