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

int main()
{
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
    }

    int max = head->val, min = head->val;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val > max)
        {
            max = tmp->val;
        }
        if (tmp->val < min)
        {
            min = tmp->val;
        }
        tmp = tmp->next;
    }

    cout << max << " " << min;
    return 0;
}