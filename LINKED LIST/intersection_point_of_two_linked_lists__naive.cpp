/****************************************************************

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

*****************************************************************/

Node* findIntersection(Node *head1, Node *head2)
{
    while(head2)
    {
        Node* temp = head1;
        while(temp)
        {
            if(temp==head2) return temp;
            temp = temp->next;
        }
        head2 = head2->next;
    }
    return NULL;
}
