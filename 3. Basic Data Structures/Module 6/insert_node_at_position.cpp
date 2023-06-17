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

void addNode(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *tmp = head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
}

void insertNode(Node *&head, int pos, int v)
{
    Node *newNode = new Node(v);

    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *tmp = head;
        for (int i = 0; i < pos; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
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
int main()
{
    Node *head = NULL;

    addNode(head, 10);
    addNode(head, 20);
    addNode(head, 30);
    addNode(head, 40);
    addNode(head, 50);

    printNode(head);

    insertNode(head, 2, 100);
    printNode(head);

    insertNode(head, 0, 500);
    printNode(head);
    return 0;
}