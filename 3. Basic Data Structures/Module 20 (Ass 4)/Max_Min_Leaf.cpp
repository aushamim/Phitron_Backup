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
void leaf(Node *root)
{
    if (!root)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);

    int max = INT_MIN, min = INT_MAX;
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        if (!f->left && !f->right)
        {
            if (f->val > max)
            {
                max = f->val;
            }
            if (f->val < min)
            {
                min = f->val;
            }
        }

        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
    cout << max << " " << min;
}
int main()
{
    Node *root = input_tree();
    leaf(root);
    return 0;
}