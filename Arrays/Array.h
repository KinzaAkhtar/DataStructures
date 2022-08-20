class Array{
    private:
        int MyArray[50];
        int size;
        const int maxsize;
    public:
        Array();
        void input(int NumberOfElements);
        int getsize();
        void treverse();
        void insert(int element,int position);
        void pushfront(int element);
        void pushback(int element);
        void remove(int position);


};