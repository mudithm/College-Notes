#include <iostream>

using namespace std;


struct Node{

    int value;
    Node* link;

};


class LinkedList{
    const int END = 0;
    const int BEG = 1;
    public:
        LinkedList();
        ~LinkedList();
        void addNode(int value, int pos = 0);
        void insertInMiddle(int value);
        //void remNode(int value);
        int size();
        void display();
        //bool search(int meme);
    private:
        int m_size;
        Node* head;
};


LinkedList::LinkedList(){
    m_size = 0;
    head = nullptr;
}

LinkedList::~LinkedList(){
	Node* prev = nullptr;
	Node* temp = head;
	for (; temp != nullptr; temp = temp->link){
		delete prev;
		prev = temp;
	}

}

void LinkedList::display(){
    for (Node* p = head; p != nullptr; p = p->link)
        cout << p->value << endl;
}

void LinkedList::addNode(int val, int pos){
    
    if (head == nullptr){
        head = new Node;
        head->value = val;
        head->link = nullptr;
        return;
    }
    
    switch (pos){
        case 0:
        {
        	Node* temp;
            for (temp = head; temp->link != nullptr; temp = temp->link)
                ;
            temp->link = new Node;
            temp = temp->link;
            temp->value = val;
            temp->link = nullptr;
            m_size++;
            break;
        }
        case 1:
        {
            Node* temp3 = new Node;
            temp3->value = val;
            temp3->link = head;
            head = temp3;
            m_size++;
            break;
        }
        default:
        {
             if (pos < 0 || pos >= size()){
                cout << "Cannot add node at position " << pos << endl;
                exit(0);
            }
            int i = 0;
            Node* temp4;
            for (temp4 = head; i < pos; temp4 = temp4->link)
                i++;
            Node* temp2 = temp4->link;
            temp4->link = new Node;
            temp4 = temp4->link;
            temp4->value = val;
            temp4->link = temp2;
        }
    }

}

int LinkedList::size(){
	return m_size;
}

void LinkedList::insertInMiddle(int val){
	if (head == nullptr || head->value >= val){
		addNode(val, 1);
		m_size++;
		return;
	}
	Node* temp;
	for (temp = head; temp != nullptr && temp->link != nullptr && temp->link->value <= val; temp = temp->link)
		;
	

	Node* t2 = new Node;
	t2->value = val;
	t2->link = temp->link;
	temp->link = t2;
	m_size++;


	

}

int main(){
	LinkedList meme;
	meme.display();
	meme.insertInMiddle(44);
	meme.addNode(200);
	meme.addNode(437);
	cout << meme.size() << endl;
	meme.display();

	cout << "--------" << endl;
	meme.insertInMiddle(47);
	meme.display();

}

