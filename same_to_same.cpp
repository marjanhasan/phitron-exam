#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
// void print_linekd_list(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }
bool isEqual(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->val != temp2->val)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if (temp1 == NULL && temp2 == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head1, tail1, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head2, tail2, val);
    }
    // print_linekd_list(head1);
    // print_linekd_list(head2);
    if (isEqual(head1, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
