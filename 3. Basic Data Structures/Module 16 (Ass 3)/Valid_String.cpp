#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    char val;
    Node *prev;
    Node *next;
    Node(char val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insertTail(Node *&head, Node *&tail, char c)
{
    Node *newNode = new Node(c);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
bool check(Node *head, int sz)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->prev != NULL)
        {
            if (tmp->val == 'A' && tmp->prev->val == 'B')
            {
                Node *dn1 = tmp;
                Node *dn2 = tmp->prev;
                if (tmp->next != NULL)
                {
                    tmp->next->prev = tmp->prev->prev;
                }
                delete dn1;
                delete dn2;
                sz -= 2;
            }
            else if (tmp->val == 'B' && tmp->prev->val == 'A')
            {
                Node *dn1 = tmp;
                Node *dn2 = tmp->prev;
                if (tmp->next != NULL)
                {
                    tmp->next->prev = tmp->prev->prev;
                }
                delete dn1;
                delete dn2;
                sz -= 2;
            }
        }
        tmp = tmp->next;
    }
    return sz == 0 ? true : false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        Node *head = NULL;
        Node *tail = NULL;
        int sz = 0;
        for (int i = 0; i < s.size(); i++)
        {
            sz++;
            insertTail(head, tail, s[i]);
        }

        bool flag = check(head, sz);
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}