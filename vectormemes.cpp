#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class LinkedList
{
    public:
        LinkedList();
        ~LinkedList();
        void reverse();
        void print();
    private:
        struct Node
        {
            int num;
            Node* next;
        };
        Node* head;
        Node* reverseHelper(Node* current, Node* prev);
};

LinkedList::LinkedList() : head(nullptr)
{
    // test code
    head = new Node;
    head->num = 1;
    head->next = new Node;
    Node* heade = head->next;
    heade->num = 2;
    heade->next = new Node;
    heade = heade->next;
    heade->num = 3;
    heade->next = new Node;
    heade = heade->next;
    heade->num = 4;
    heade->next = nullptr;
    heade = heade->next;

    

}

void LinkedList::print()
{
    for (Node* p = head; p != nullptr; p = p->next)
        cout << p->num << " ";
    cout << endl;
}

void LinkedList::reverse()
{
    head = reverseHelper(head, nullptr);
}

LinkedList::Node* LinkedList::reverseHelper(Node* current, Node* prev)
{
    if (current == nullptr)
        return prev;
    Node* last_node = reverseHelper(current->next, current);
    current->next = prev;
    return last_node;
}

LinkedList::~LinkedList()
{
    for (Node* p = head; p != nullptr; p = p->next)
    {
        delete p;
    }
}

bool isDoable(int jug1, int cap1, int jug2, int cap2, int target, int depth)
{
    if (jug1 == target || jug2 == target)
        return true;
    if (depth == 9)
        return false;
    if (isDoable(cap1, cap1, jug2, cap2, target, depth+1))
        return true;
    if (isDoable(jug1, cap1, cap2, cap2, target, depth+1))
        return true;
    if (isDoable(0, cap1, jug2, cap2, target, depth+1))
        return true;
    if (isDoable(jug1, cap1, 0, cap2, target, depth+1))
        return true;

    int	amt	=	min( (cap1	- jug1),	jug2);	 	 //	unused	capacity	in	A,	or	all	of	what’s	in	B
	if (isDoable(jug1	+	amt,	cap1,	jug2	- amt,	cap2,	target,depth+1))
		return	true;

	amt = min((cap2 - jug2), jug1);
	if (isDoable(jug1 - amt, cap1, jug2 + amt, cap2, target, depth+1))
		return true;

	return false;
} 

void printArr(const double a[], int n)
{
	if (n==0)
		return;

	cout << a[n-1];
	printArr(a, n-1);
}

int gcd(int m, int n)
{
	
	if (n%m == 0)
		return m;

	n = n - m;
	
	if (m < n)
		return gcd(m,n);
	else
		return gcd(n, m);
}

int powerOfTwo(int x)
{
    if (x == 1)
        return 2;
    if (x == 0)
        return 1;

    return powerOfTwo(x - 1) / .5;
}

void printNum(int x)
{
    if (x == 1)
    {
        cout << x;
        return;
    }
     printNum(x - 1);
     cout  << " " << x;
}

int fun(int a)
{
    cout << a;
    if (a < 3)
        fun(fun(fun(++a)));
    return a;
}

int main()
{
    vector<int> memes = {1, 2, 3, 4, 5, 6};

    for (vector<int>::reverse_iterator rIt = memes.rbegin(); rIt != memes.rend(); rIt++)
        cout << *rIt << " ";
    cout << endl;

    LinkedList meme;
    meme.print();
    meme.reverse();
    meme.print();

    cout << isDoable(0, 3, 0, 5, 4, 0)  << endl;
    cout << isDoable(0, 7, 0, 10, 2, 0) << endl;

    double a[] = {1.0, 2.0, 3.0, 4.0};
    printArr(a, 4);

    cout << endl;
    cout << "got here" << endl;
    cout << gcd(5, 10) << endl;
	cout << gcd(4, 6) << endl;
	cout << gcd(100, 101) << endl;

	cout << gcd(30, 75) << endl;    
		cout << gcd(300, 750) << endl;    

	cout << gcd(291, 891) << endl;    

	cout << gcd(1, 5) << endl;    

    cout << endl;
    cout << endl;
    cout << powerOfTwo(2) << endl;
    cout << powerOfTwo(3) << endl;
    cout << powerOfTwo(4) << endl;
    cout << powerOfTwo(5) << endl;
    cout << powerOfTwo(6) << endl;
    

    printNum(10);
    cout << endl << endl;


    fun(1);

} 


