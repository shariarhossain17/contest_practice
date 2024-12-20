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
//     Node(int val)
//     {
//         data = val;
//         next = nullptr;
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

void print(Node *head)
{
    Node *tmp = head;

    while (tmp != nullptr)
    {
        cout << tmp->data << " ";

        tmp = tmp->next;
    }
    newLine;
}

void size(Node *head)
{
    Node *tmp = head;

    int cnt = 0;

    while (tmp != nullptr)
    {
        cnt++;
        tmp = tmp->next;
    }
    cout << cnt;
    newLine;
}

void search_in_ll(Node *head, int k)
{

    Node *tmp = head;

    while (tmp != nullptr)
    {

        if (tmp->data == k)
        {
            cout << tmp->data;
            newLine;
            return;
        }
        tmp = tmp->next;
    }

    cout << "-1\n";
}

Node *remove_head(Node *head)
{
    Node *tmp = head;

    if (head == NULL)
    {
        return head;
    }

    head = tmp->next;
    delete tmp;
    return head;
}

Node *remove_tail(Node *head)
{

    Node *tmp = head;
    if (head == NULL)
        return head;

    while (tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }

    free(tmp->next);
    tmp->next = nullptr;

    return head;
}

Node *delete_kth_element(Node *head, int k)
{

    if (head == NULL)
        return head;

    if (k == 1)
    {
        Node *tmp = head;
        head = tmp->next;
        free(tmp);
        return head;
    }

    int cnt = 0;
    Node *tmp = head;

    Node *prev = NULL;

    while (tmp != NULL)
    {
        cnt++;

        if (cnt == k)
        {

            prev->next = prev->next->next;
            delete tmp;
            break;
        }
        prev = tmp;
        tmp = tmp->next;
    }

    return head;
}

Node *delete_element_with_x(Node *head, int x)
{
    if (head == NULL)
        return head;

    if (head->data == x)
    {
        Node *tmp = head;
        head = tmp->next;
        free(tmp);
        return head;
    }
    Node *tmp = head;

    Node *prev = NULL;

    while (tmp != NULL)
    {

        if (tmp->data == x)
        {

            prev->next = prev->next->next;
            delete tmp;
            break;
        }
        prev = tmp;
        tmp = tmp->next;
    }

    return head;
}

// all insert operation

Node *insert_head(Node *head, int val)
{

    Node *tmp = new Node(val);
    tmp->next = head;

    return tmp;
}

Node *insert_tail(Node *head, int val)
{
    if (head == NULL)
        return head;

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    Node *last_val = new Node(val);

    tmp->next = last_val;
    last_val->next = nullptr;
    return head;
}

Node *insert_kth_position(Node *head, int val, int pos)
{

    if (head == NULL)
        return head;

    Node *tmp = head;
    int cnt = 0;
    Node *prev = NULL;
    while (tmp != NULL)
    {
        cnt++;
        if (cnt == pos)
        {

            Node *new_node = new Node(val);

            prev->next = new_node;
            prev->next->next = tmp;
            break;
        }

        prev = tmp;
        tmp = tmp->next;
    }
    return head;
}

Node *insert_x_value(Node *head, int val, int x)
{
    if (head == NULL)
        return head;

    Node *tmp = head;
    Node *prev = NULL;
    while (tmp != NULL)
    {
        if (tmp->data == x)
        {
            Node *new_node = new Node(val);

            if (prev == NULL)
            {
                new_node->next = head;
                head = new_node;
            }
            else
            {
                prev->next = new_node;
                new_node->next = tmp;
            }
            break;
        }

        prev = tmp;
        tmp = tmp->next;
    }

    return head;
}
void solve()
{

    int n;
    cin >> n;
    vi v(n);
    array_input_int(v, 0, n);

    Node *head = convertArrayToLL(v);

    // size(head);

    // search_in_ll(head, 100);
    // head = remove_head(head);
    // head = remove_tail(head);

    // head = delete_kth_element(head, 4);
    // head = delete_element_with_x(head, 40);
    // head = insert_head(head, 11);
    // head = insert_tail(head, 11);

    // head = insert_kth_position(head, 4, 4);
    head = insert_x_value(head, 4, 1);
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