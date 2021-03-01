#include <iostream>
#include <time.h>
using namespace std;

template <typename T>
class List
{
public:
	List();
	~List();
	void push_back(T date);
	int Getsize() { return size; };
	T& operator[](const int index);
public:
	template <typename T>
	class Node
	{
	public:
		Node* pnext;
		T date;
		Node(T date = T(), Node *pnext = nullptr)
		{
			this-> date = date;
			this->pnext = pnext;
		}
	};
	int size  =0;
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

		while (corect->pnext != nullptr)
		{
			corect = corect->pnext;
		}
		corect->pnext = new Node<T>(data);
	}
	size++;
}
template<typename T>
T& List<T>::operator[](const int index)
{
	int counter = 0;
	Node<T>* current = this->head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->date;
		  }
		current = current->pnext;
		counter++;
	}
}
int main()
{
   List<int>  lst;
   int number;
   cin >> number;
   for (int i = 0; i < number; i++)
   {
	   lst.push_back(rand() % 10);
   }
   cout << "Hello Davo "<< lst.Getsize() << endl;
	for (int i = 0; i < lst.Getsize(); i++)
	{
		cout << lst[i] << endl;
	}
	return 0;
}
