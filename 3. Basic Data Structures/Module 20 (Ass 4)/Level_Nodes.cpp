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
int max_height(Node *root)
{
    if (!root)
    {
        return 0;
    }
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l, r) + 1;
}
void level_print(Node *root, int lvl)
{
    queue<pair<Node *, int>> q2;
    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        q.pop();

        q2.push(pr);

        if (pr.first->left)
        {
            q.push({pr.first->left, pr.second + 1});
        }
        if (pr.first->right)
        {
            q.push({pr.first->right, pr.second + 1});
        }
    }

    while (!q2.empty())
    {
        pair<Node *, int> pr = q2.front();
        q2.pop();
        if (pr.second == lvl)
        {
            cout << pr.first->val << " ";
        }
    }
}
int main()
{
    Node *root = input_tree();
    int height = max_height(root) - 1;
    int lvl;
    cin >> lvl;
    if (lvl > height)
    {
        cout << "Invalid";
    }
    else
    {
        level_print(root, lvl);
    }
    return 0;
}