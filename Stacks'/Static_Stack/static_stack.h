using namespace std;
class static_stack
{
private:
    int maxsize;
    int top;
    int stack[10];//capacity of this stack is 10
public:
    static_stack();
    int capacity();
    void push();
    void push(int data);
    void pop();
    bool is_empty();
    bool is_full();
    int size();
    int available_capacity();
    friend ostream& operator<<(ostream& out,static_stack& mystack);
};

