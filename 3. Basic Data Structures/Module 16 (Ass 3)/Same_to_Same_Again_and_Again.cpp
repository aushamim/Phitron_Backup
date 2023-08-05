#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insertTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
int main()
{
    stack<int> st;
    queue<int> q;

    int n, m;
    cin >> n >> m;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (m--)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    list<int> l1;
    list<int> l2;
    while (!st.empty())
    {
        l1.push_back(st.top());
        st.pop();
    }
    while (!q.empty())
    {
        l2.push_back(q.front());
        q.pop();
    }

    bool flag = false;
    auto it1 = l1.begin();
    auto it2 = l2.begin();
    if (l1.size() == l2.size())
    {
        while (it1 != l1.end() && it2 != l2.end())
        {
            if (*it1 != *it2)
            {
                flag = true;
                break;
            }
            it1++;
            it2++;
        }
    }
    else
    {
        flag = true;
    }

    cout << (flag ? "NO" : "YES") << endl;
    return 0;
}