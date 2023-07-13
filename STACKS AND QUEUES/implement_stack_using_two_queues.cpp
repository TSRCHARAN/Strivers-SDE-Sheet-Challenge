class Stack
{
    queue<int>q1,q2;
   public:
    Stack()
    {

    }

    int getSize()
    {
        return q1.size();
    }

    bool isEmpty()
    {
        return q1.empty();
    }

    void push(int element)
    {
        q2.push(element);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int>q = q1;
        q1 = q2;
        q2 = q;
    }

    int pop()
    {
        if(q1.empty())
        {
            return -1;
        }
        int n = q1.front();
        q1.pop();
        return n;
    }

    int top()
    {
        if(q1.empty())
        {
            return -1;
        }
        return q1.front();
    }
};
