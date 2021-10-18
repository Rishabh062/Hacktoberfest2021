#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

class Node
{
public:
    int data;
    vector<Node *> children;

    Node(int data)
    {
        this->data = data;
    }

    ~Node()
    {
        int size = children.size();
        for (int index = 0; index < size; index++)
        {
            delete children[index];
        }
    }
};

Node *takeInput()
{
    int size;

    cin >> size;

    int *input = new int[size];

    for (int index = 0; index < size; index++)
    {
        cin >> input[index];
    }

    Node *root = NULL;

    stack<Node *> nodes;

    for (int index = 0; index < size; index++)
    {
        if (input[index] == -1)
        {
            nodes.pop();
        }

        else
        {
            Node *newNode = new Node(input[index]);

            if (nodes.size() == 0)
            {
                root = newNode;
            }

            else
            {
                nodes.top()->children.push_back(newNode);
            }

            nodes.push(newNode);
        }
    }

    return root;
}
void print(Node *root)
{
    queue<Node*> list;
    
    list.push(root);
    
    Node *ptr = new Node(-1);
    list.push(ptr);
    while(list.size()!=1)
    {
        Node* value = list.front();
        list.pop();
        if(value == ptr)
        {
            list.push(ptr);
            cout<<endl;
        }
        else{
        cout<<value->data<<" ";
        for(int i = 0 ; i < value->children.size() ; i++)
        {
            list.push(value->children[i]);
        }
        }
    }
   
}
int main()
{
    Node* root = takeInput();
    print(root);
}