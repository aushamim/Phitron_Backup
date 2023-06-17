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

void printNode(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void printReverse(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    printReverse(head->next);
    cout << head->val << " ";
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

    printReverse(head);
    cout << endl;
    printNode(head);

    return 0;
}