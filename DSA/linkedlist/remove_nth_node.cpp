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
class ListNode
{
public:
    int val;
    ListNode *next;

public:
    ListNode(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};

void print_LL(ListNode *head)
{
    ListNode *tmp = head;

    while (tmp != nullptr)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    newLine;
}

ListNode *array_to_LL(vector<int> &arr)
{
    ListNode *head = new ListNode(arr[0]);
    ListNode *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        ListNode *tmp = new ListNode(arr[i]);

        mover->next = tmp;

        mover = mover->next;
    }

    return head;
}

// print nth from end brute force

ListNode *reverse_array_brute_force(ListNode *head)
{

    ListNode *tmp = head;

    stack<int> st;

    while (tmp != NULL)
    {
        st.push(tmp->val);
        tmp = tmp->next;
    }

    ListNode *newHead = new ListNode(st.top());

    ListNode *mover = newHead;

    st.pop();

    while (!st.empty())
    {
        ListNode *tmp = new ListNode(st.top());
        st.pop();
        mover->next = tmp;
        mover = mover->next;
    }

    return newHead;
}
// List Node reverse optimal

ListNode *reverse_ll(ListNode *head)
{

    if (head == nullptr)
        return head;
    ListNode *tmp = head;

    ListNode *prev = nullptr;

    while (tmp != nullptr)
    {
        ListNode *next = tmp->next;
        tmp->next = prev;
        prev = tmp;
        tmp = next;
    }

    return prev;
}
ListNode *remove_end(ListNode *head, int k)
{

    if (head == nullptr)
        return head;

    ListNode *tmp = head;

    int cnt = 0;

    ListNode *prev = head;

    while (tmp != nullptr)
    {
        cnt++;

        if (cnt == k)
        {

            prev->next = tmp->next;

            delete tmp;

            break;
        }
        prev = tmp;

        tmp = tmp->next;
    }
    return head;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vi arr(n);
    array_input_int(arr, 0, n);

    ListNode *head = array_to_LL(arr);

    // brute force reverse
    // ListNode *newHead = reverse_array_brute_force(head);

    // optimal_reverse
    ListNode *newHead = reverse_ll(head);

    ListNode *remove_head = remove_end(newHead, k);
    ListNode *ans_head = reverse_ll(newHead);

    print_LL(ans_head);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, k;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}