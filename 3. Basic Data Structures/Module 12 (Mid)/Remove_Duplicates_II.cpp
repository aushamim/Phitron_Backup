#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void printNode(list<int> myList)
{
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> myList;

    int a;
    while (cin >> a)
    {
        if (a == -1)
        {
            break;
        }
        myList.push_back(a);
    }

    myList.sort();
    myList.unique();
    printNode(myList);
    return 0;
}