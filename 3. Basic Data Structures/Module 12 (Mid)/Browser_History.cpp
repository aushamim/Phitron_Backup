#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void addNode(Node *&head, Node *&tail, string val)
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
        newNode->prev = tail;
        tail = newNode;
    }
}

void check(Node *head, Node *&checkList, string op)
{
    if (op == "visit")
    {
        string address;
        cin >> address;

        bool flag = false;
        Node *tmp = head;
        while (tmp != NULL)
        {
            if (tmp->val == address)
            {
                flag = true;
                checkList = tmp;
                break;
            }
            tmp = tmp->next;
        }

        cout << (flag ? checkList->val : "Not Available") << endl;
    }
    else if (op == "prev")
    {
        if (checkList->prev == NULL)
        {
            cout << "Not Available" << endl;
        }
        else
        {
            checkList = checkList->prev;
            cout << checkList->val << endl;
        }
    }
    else if (op == "next")
    {
        if (checkList->next == NULL)
        {
            cout << "Not Available" << endl;
        }
        else
        {
            checkList = checkList->next;
            cout << checkList->val << endl;
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string a;
    while (cin >> a)
    {
        if (a == "end")
        {
            break;
        }
        addNode(head, tail, a);
    }

    Node *checkList = head;
    int q;
    cin >> q;
    cin.ignore();
    while (q--)
    {
        string op;
        cin >> op;
        check(head, checkList, op);
    }

    return 0;
}