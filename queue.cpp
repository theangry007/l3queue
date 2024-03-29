#include "stdafx.h"
#include "iostream"
using namespace std; 

struct Node
	{
		int data; // данные
		Node *pred; // указатель на предыдущий элемент
	};

class queue
	{ 
		public: Node *beg;	Node *end; // указатели на начало и конец типа Node
		queue() // конструктор без параметров
		{
			beg=end=NULL;
		}
		void push (int i); // ф-ия добавления эл-та
		void pop(); // ф-ия вывода элемента
	};

	void queue :: push (int i)
	{
		Node* newnod=new Node; // создаем элемент
		newnod->data=i; // заполняем поле данных
		newnod->pred=NULL; // указатель на предыдущий приравниваем к 0
		if (beg!=NULL) // если уже есть элементы
		{ 
			end->pred=newnod; // то указатель последнего элемента на предыдущий (равный 0) становится равный указателю на 
			end=newnod; // добавленный элемент, а указатель на последний перемещается на добавленный
		}
		else beg=end=newnod; // если очерель состоит из 1 элемента

	}

	void queue :: pop ()
	{
		Node *tek=beg; // создаем текущий элемент
		while (tek!=NULL)  // пробегаем по очереди
		{
			cout << tek->data << endl; // и выводим элементы
			tek=tek->pred;
		}

	}

	int main ()
{ // заполняем очередь и применяем функции
	queue st1;
	while (true)
	{char c; //int n,m;
	cout << "input y/n" << endl;
	cin >>c;
	if (c=='y')
{
	int g;
	cout << "Number of elements:";
	cin >> g;
	for (int i=0; i<g; i++)
	{
	   int r;
		cout<< "Enter elem:";
		cin>>r;
		st1.push(r);
	}

}
else {
st1.pop();
cout << "\n\n";
break;}
}
system("PAUSE");
return 0;
}