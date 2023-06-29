#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
#include<bits/stdc++.h>
bool isPalindrome(LinkedListNode<int> *head)
{
    vector<int>arr;
    while(head != NULL)
    {
        arr.push_back(head->data);
        head = head->next;
    }
    for(int i=0;i<arr.size()/2;i++)
    {
        if(arr[i] != arr[arr.size()-i-1])
            return false;
    }
    return true;
}
