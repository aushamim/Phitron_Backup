#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root = val == -1 ? NULL : new Node(val);
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left = l == -1 ? NULL : new Node(l);
        Node *right = r == -1 ? NULL : new Node(r);

        f->left = left;
        f->right = right;

        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
    return root;
}
void reverse(Node *root)
{
    stack<int> s;
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        s.push(f->val);

        if (f->right)
        {
            q.push(f->right);
        }
        if (f->left)
        {
            q.push(f->left);
        }
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
int main()
{
    Node *root = input_tree();
    reverse(root);
    return 0;
}