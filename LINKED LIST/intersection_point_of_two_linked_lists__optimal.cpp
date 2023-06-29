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

int getDifference(Node* head1, Node* head2)
{
    int len1 = 0;
    int len2 = 0;
    while(head1 || head2)
    {
        if(head1)
        {
            len1++;
            head1 = head1->next;
        }
        if(head2)
        {
            len2++;
            head2 = head2->next;
        }
    }
    return len1-len2;
}

Node* findIntersection(Node *head1, Node *head2)
{
    int diff = getDifference(head1,head2);
    if(diff<0)
    {
        while(diff!=0)
        {
            diff++;
            head2 = head2->next;
        }
    }
    else
    {
        while(diff!=0)
        {
            diff--;
            head1 = head1->next;
        }
    }
    while(head1!=NULL)
    {
        if(head1 == head2)
        {
            return head1;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return head1;
}
