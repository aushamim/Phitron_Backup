#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertHead(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insertTail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        x == 0 ? insertHead(head, tail, v) : insertTail(head, tail, v);
        cout << head->val << " " << tail->val << endl;
    }
    return 0;
}