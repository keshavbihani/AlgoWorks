#include<iostream>

template<class T>
struct node
{
	T data;
	node <T>* next;
}


template<class T>
class Linklist
{
public:
node <T>*first,*last;
Linklist()
{
	first=NULL;
	last=NULL;
}

void add(T data)
{
	if(first==NULL)
	{
		first=new node<T>;
		first->data=data;
		first->next=NULL;
		last=first;
	}
	else
	{
		node <T>*temp=new node<T>;
		temp->data=data;
		temp->next=NULL;
		last->next=temp;
		last=last->next;
	}
}
T getVal(int index)
{
	if(index==0)
	{
		return first->data;
	}
	else
	{
		node <T>*curr=first;
		
		for(int i=0;i<index;i++)
		{
			curr=curr->next;
		}
		return curr->data;
	}
}

T operator[](int index)
{
	return getVal(index);
}
};

int main(int argc, char const *argv[])
{
	Linklist<std::string> list;
	list.add("Hello");
	list.add("Hi");
	list.add("How Are You?");
	std::cout << list[1] << std::endl;
	return 0;
}
