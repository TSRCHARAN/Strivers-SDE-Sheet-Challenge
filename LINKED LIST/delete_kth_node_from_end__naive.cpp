/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int k)
{
    int n = 0;
    Node* temp = head;
    while(temp)
    {
        n++;
        temp = temp->next;
    }

    if(k>n)
    {
        return head;
    }
    else if(k==n)
    {
        return head->next;
    }
    else
    {
        Node* curr = head;
        Node* prev = NULL;
        int diff = n-k;
        for (int i = 0; i < diff; i++) {
          prev = curr;
          curr = curr->next;
        }
        prev->next = curr->next;
        return head;
    }
}
