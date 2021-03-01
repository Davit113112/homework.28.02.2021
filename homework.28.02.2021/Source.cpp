#include <iostream>
using namespace std;
template <typename T>
class List
{
public:
	List();
	~List();
	void push_back(T data);
	int Getsize() { return size };
	
private:

	template <typename T>
	class Node
	{
	public:
		Node* pNext;
		T date;
		Node(T data= T(), Node *pnext = nullptr)
		{
			this-> data = data;
			this->pNext = pNext;
		}
	};
	int size;
	Node<T> *head;
};
template <typename T>
List<T>::List()
{
	size = 0;
	head = nullptr;
};
template <typename T>
List<T>::~List()
{

}
template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T>* corect = this->head;
		while (pNext != nullptr)
		{
			corect = corect->pNext;
		}
		corect = corect->pNext;
	}
	Size++;
}
template<typename T>

int main()
{
   List<int>  lst;
   lst.push_back(5);
   lst.push_back(10);
   lst.push_back(15);
   cout << lst.Getsize();

	
	return 0;
}
