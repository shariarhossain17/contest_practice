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

void printLL(Node *head)
{

    Node *tmp = head;

    while (tmp != nullptr)
    {
        cout << tmp->val << " ";

        tmp = tmp->next;
    }
}

Node *convert_array_to_LL(vector<int> &ar)
{

    Node *head = new Node(ar[0]);
    Node *mover = head;

    for (int i = 1; i < ar.size(); i++)
    {

        Node *new_val = new Node(ar[i]);
        mover->next = new_val;
        mover = mover->next;
    }

    return head;
}

Node *reverse_node(Node *head)
{
    Node *tmp = head;

    Node *prev = nullptr;

    while (tmp != nullptr)
    {
        Node *next = tmp->next;
        tmp->next = prev;
        prev = tmp;
        tmp = next;
    }

    return prev;
}

bool ll_palindrome(Node *head)
{

    Node *fast = head;
    Node *slow = head;

    while (slow != nullptr and fast->next->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *reverse_head = reverse_node(slow->next);

    Node *old_head = head;
    Node *new_head = reverse_head;

    while (new_head != nullptr)
    {
        if (old_head->val != new_head->val)
            return false;

        old_head = old_head->next;
        new_head = new_head->next;
    }

    return true;
}

Node *even_odd(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    Node *odd = head;
    Node *even = head->next;
    Node *even_head = even;

    while (even != nullptr && even->next != nullptr)
    {
        odd->next = odd->next->next;
        even->next = even->next->next;

        odd = odd->next;
        even = even->next;
    }

    odd->next = even_head;
    if (even != nullptr)
    {
        even->next = nullptr;
    }

    return head;
}

void solve()
{

    int n;
    cin >> n;

    vi ar(n);
    array_input_int(ar, 0, n);

    Node *head = convert_array_to_LL(ar);

    Node *new_head = even_odd(head);

    printLL(new_head);
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