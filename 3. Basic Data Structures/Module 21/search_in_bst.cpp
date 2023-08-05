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
bool search(Node *root, int x)
{
    if (!root)
    {
        return false;
    }
    if (root->val == x)
    {
        return true;
    }

    if (x < root->val)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}
int main()
{
    Node *root = input_tree();
    cout << (search(root, 100) ? "Yes, Found" : "No, Not Found");
    return 0;
}

// 10 5 2 15 6 12 16 -1 3 -1 -1 -1 -1 -1 -1 -1 -1