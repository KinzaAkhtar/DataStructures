class node{
    private:
        int data;
        node* link;
        friend class linked_list;

};
class linked_list{
    private:
        node *head;
        node *newnode;
        node *currentnode;
        int size;
    public:
        linked_list();
        linked_list(int n);
        void create_node();
        void create_node(int data);
        void print();
        void add_node(int position);
        void add_node(int position,int data);
        void push_back(int data);
        void push_back();
        void push_up(int data);
        void push_up();
        int get_size();
        void update(int position);
        void update(int position,int data);
        void deletenode(int position);
        void delete_from_begining();
        void delete_from_end();
        ~linked_list();
};

