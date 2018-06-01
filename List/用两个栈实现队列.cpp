class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        int temp;
        if(stack2.size() <= 0 ){
            while(!stack1.empty()){
                temp = stack1.top();
                stack2.push(temp);
                stack1.pop();
            }
        }
        
        temp = stack2.top();
        stack2.pop();
        return temp;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};