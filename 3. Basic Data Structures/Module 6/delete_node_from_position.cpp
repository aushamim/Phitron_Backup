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

void deleteNode(Node *&head, int pos)
{
    Node *tmp = head;
    if (pos == 0)
    {
        head = tmp->next;
        delete tmp;
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            tmp = tmp->next;
        }
        Node *toDelete = tmp->next;
        tmp->next = tmp->next->next;
        delete toDelete;
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

    deleteNode(head, 2);
    printNode(head);

    return 0;
}