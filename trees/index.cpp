#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree()
{
    int data;
    cout << "Enter data to enter \n";
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    cout << "Enter data for the left part of " << data << endl;
    root->left = buildTree();
    cout << "Enter data for the right part of " << data << endl;
    root->right = buildTree();

    return root;
}

void levelOrderTraversal(Node *root) 
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        // insert the nodes at the same level
        Node *temp = q.front();
        // in the queue
        // pop the front element
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            // print the data
            cout << temp->data << " ";
            // insert the children
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
int main()
{
    Node *root = NULL;

    root = buildTree();

    levelOrderTraversal(root);
    return 0;
}