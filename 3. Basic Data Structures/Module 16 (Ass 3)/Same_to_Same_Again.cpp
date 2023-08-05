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
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
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
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return sz == 0 ? true : false;
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
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
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            head->prev = NULL;
        }
        delete deleteNode;
    }
    int top()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return sz == 0 ? true : false;
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
    myStack st;
    myQueue q;

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

    Node *l1Head = NULL;
    Node *l1Tail = NULL;
    Node *l2Head = NULL;
    Node *l2Tail = NULL;
    int l1sz = 0;
    int l2sz = 0;
    while (!st.empty())
    {
        l1sz++;
        insertTail(l1Head, l1Tail, st.top());
        st.pop();
    }
    while (!q.empty())
    {
        l2sz++;
        insertTail(l2Head, l2Tail, q.top());
        q.pop();
    }

    Node *tmp1 = l1Head;
    Node *tmp2 = l2Head;
    bool flag = false;
    if (l1sz == l2sz)
    {
        while (tmp1 != NULL && tmp2 != NULL)
        {
            if (tmp1->val != tmp2->val)
            {
                flag = true;
                break;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
    }
    else
    {
        flag = true;
    }

    cout << (flag ? "NO" : "YES") << endl;
    return 0;
}