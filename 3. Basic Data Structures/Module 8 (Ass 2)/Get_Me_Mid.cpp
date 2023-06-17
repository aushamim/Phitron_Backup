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

void addNode(Node *&head, Node *&tail, int v)
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

void sort(Node *&head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}

int main()
{
    int count = 0;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int a;
        cin >> a;
        if (a == -1)
        {
            break;
        }
        addNode(head, tail, a);
        count++;
    }

    sort(head);

    Node *tmp = head;
    for (int i = 1; i < count / 2; i++)
    {
        tmp = tmp->next;
    }

    if (count < 2)
    {
        cout << tmp->val;
    }
    else if (count % 2 == 0)
    {
        cout << tmp->val << " " << tmp->next->val << endl;
    }
    else
    {
        cout << tmp->next->val << endl;
    }

    return 0;
}