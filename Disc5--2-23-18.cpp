#include <vector>
#include <iostream>
using namespace std;

template <typename T>
class Stack
{
    public:
        Stack();
        void push(const T& t);
        void pop();
        int size();
    private:
        vector<T> m_stack;
        int m_size;
};


template <typename T>
Stack<T>::Stack()
{}

template <typename T>
void Stack<T>::push(const T& t)
{
    m_stack.push_back(t);
    m_size++;
}

template <typename T>
void Stack<T>::pop()
{
    if (m_size <= 0)
        return;
    m_stack.pop_back();
    m_size--;
}

template <typename T>
int Stack<T>::size()
{
    return m_size;
}


int main()
{
    Stack<int> meme;
    meme.push(5);
    meme.push(8);
    cout << meme.size() << endl;
    meme.pop();
    cout << meme.size() << endl;
    meme.pop();
    cout << meme.size() << endl;
}
