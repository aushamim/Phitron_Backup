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
bool dupliCheck(Node *head)
{
    int count[101] = {0};
    while (head != NULL)
    {
        count[head->val]++;
        head = head->next;
    }

    for (int i = 0; i < 101; i++)
    {
        if (count[i] > 1)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    Node *head = NULL, *tail = NULL;
    int x;
    while (cin >> x && x != -1)
    {
        addNode(head, tail, x);
    }
    cout << (dupliCheck(head) ? "YES" : "NO");
    return 0;
}