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
void insert_node(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }
    if (x < root->val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert_node(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert_node(root->right, x);
        }
    }
}
int delete_max(Node *&root, int max)
{
    int x = root->val;
    if (root->val <= max)
    {
        if (root->right == NULL)
        {
            return x > max ? x : max;
        }
        int chk = delete_max(root->right, x > max ? x : max);
        if (chk == x)
        {
            root->right = NULL;
            return x;
        }
        else
        {
            return chk;
        }
    }
    else
    {
        if (root->left == NULL)
        {
            return x > max ? x : max;
        }
        int chk = delete_max(root->left, x > max ? x : max);
        if (chk == x)
        {
            root->left = NULL;
            return x;
        }
        else
        {
            return chk;
        }
    }
}
int main()
{
    Node *root = input_tree();
    int q;
    cin >> q;
    while (q--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int x;
            cin >> x;
            insert_node(root, x);
        }
        else
        {
            cout << delete_max(root, root->val) << endl;
        }
    }
    return 0;
}