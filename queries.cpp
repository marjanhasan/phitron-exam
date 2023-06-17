#include <iostream>
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

Node *insertHead(Node *head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
    return head;
}

Node *insertTail(Node *tail, int value)
{
    Node *newNode = new Node(value);
    if (tail == NULL)
    {
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
    return tail;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int Q;
    cin >> Q;
    while (Q--)
    {
        int X, V;
        cin >> X >> V;
        if (X == 0)
        {
            head = insertHead(head, V);
            if (tail == NULL)
            {
                tail = head;
            }
        }
        else if (X == 1)
        {
            tail = insertTail(tail, V);
            if (head == NULL)
            {
                head = tail;
            }
        }
        cout << head->val << " " << tail->val << endl;
    }

    return 0;
}
