#include <iostream>
using namespace std;

class list
{
public:
    int data;
    list *next;
};
void append(list **head_ref, int new_data)
{
    list *new_node = new list();
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        (*head_ref) = new_node;
    }
    else
    {
        list *temp = *head_ref;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}
int main()
{
    list *node = NULL;
    int data, n;
    cout << "Enter number of elements " << endl;
    cin >> n;
    while (n != 0)
    {
        cout << "Enter the value " << endl;
        cin >> data;
        n--;
        append(&node, data);
    }

    cout << "Printing the elements" << endl;
    while ((node != NULL))

    {
        cout << node->data << " ";
        node = node->next;
    }

    return 0;
}