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
        next = NULL;
    }
};

void addNode(Node *&head, Node *&tail, int val)
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
        tail = newNode;
    }
}

Node *reverse(Node *head, Node *&revHead)
{
    Node *revNode = new Node(head->val);
    if (head->next == NULL)
    {
        revHead = revNode;
        return revNode;
    }
    Node *prev = reverse(head->next, revHead);
    prev->next = revNode;
    return revNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *revHead = NULL;

    int a;
    while (cin >> a)
    {
        if (a == -1)
        {
            break;
        }
        addNode(head, tail, a);
    }

    reverse(head, revHead);

    Node *tmp = head;
    Node *tmpRev = revHead;
    bool flag = false;
    while (tmp != NULL)
    {
        if (tmp->val != tmpRev->val)
        {
            flag = true;
            break;
        }
        tmp = tmp->next;
        tmpRev = tmpRev->next;
    }

    cout << (flag ? "NO" : "YES") << endl;
    return 0;
}