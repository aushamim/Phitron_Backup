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
void printMiddle(Node *head, int count)
{
    int middle = count / 2;
    for (int i = 0; i < middle - 1; i++)
    {
        head = head->next;
    }
    if (middle % 2 == 0)
    {
        cout << head->next->val;
    }
    else
    {
        cout << head->val << " " << head->next->val;
    }
}
int main()
{
    Node *head = NULL, *tail = NULL;
    int x, count = 0;
    while (cin >> x && x != -1)
    {
        addNode(head, tail, x);
        count++;
    }
    printMiddle(head, count);
    return 0;
}