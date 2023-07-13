class Queue
{
    stack<int>s1,s2;
    public:
    Queue()
    {

    }

    void enQueue(int val)
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(val);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int deQueue()
    {
        if(s1.empty())
        {
            return -1;
        }
        int n = s1.top();
        s1.pop();
        return n;
    }

    int peek()
    {
        if(s1.empty())
        {
            return -1;
        }
        return s1.top();
    }

    bool isEmpty()
    {
        if(s1.size()==0)
            return true;
        return false;
    }
};
