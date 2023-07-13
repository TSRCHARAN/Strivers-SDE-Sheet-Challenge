class Queue
{
    stack<int>input,output;
    public:
    Queue()
    {

    }

    void enQueue(int val)
    {
        input.push(val);
    }

    int deQueue()
    {
        if(output.empty())
        {
            if(input.empty())
            {
                return -1;
            }
            else
            {
                while(!input.empty())
                {
                    output.push(input.top());
                    input.pop();
                }
            }
        }
        int n = output.top();
        output.pop();
        return n;
    }

    int peek()
    {
        if(output.empty())
        {
            if(input.empty())
            {
                return -1;
            }
            else
            {
                while(!input.empty())
                {
                    output.push(input.top());
                    input.pop();
                }
            }
        }
        return output.top();
    }

    bool isEmpty()
    {
        if(input.empty() && output.empty())
            return true;
        return false;
    }
};
