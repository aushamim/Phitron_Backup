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
    int count1 = 0, count2 = 0;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        int a;
        cin >> a;
        if (a == -1)
        {
            break;
        }
        addNode(head1, tail1, a);
        count1++;
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int a;
        cin >> a;
        if (a == -1)
        {
            break;
        }
        addNode(head2, tail2, a);
        count2++;
    }

    Node *tmp1 = head1;
    Node *tmp2 = head2;
    int flag = 0;
    if (count1 != count2)
    {
        flag = 1;
    }
    else
    {
        while (tmp1 != NULL || tmp2 != NULL)
        {
            if (tmp1->val != tmp2->val)
            {
                flag = 1;
                break;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
    }

    cout << (flag == 0 ? "YES" : "NO");

    return 0;
}