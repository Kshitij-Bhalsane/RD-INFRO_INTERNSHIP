/*Build a simple console-based to-do list\
manager that allows users to add, view, and
delete tasks
TaskInput: Allow users to input tasks they want to add to the list.
Add Task: Implement a function to add tasks to the list.
ViewTasks:Display the list of tasks with their status (completed or
pending).
Mark Taskas Completed: Allow users to mark tasks as completed.
Remove Task: Provide an option to remove tasks from the list.
*/

#include<iostream>
#include<stdio.h>
#include <string>
using namespace std;

class Node 
{
	string task = " ";
	string status = " ";
	Node* next = NULL;

	Node(string task)
	{
		this->task =task;
		this->status = "Incomplete";
		next = NULL;
	}
	friend class List;
};

class List
{
	Node* head ;

	public:

	List()
	{
		head= NULL;
	}

	void addTask();
	void deleteTask();
	void markTask();
	void Display();

};

void List :: addTask()
{
	string task;
	cout<<"\nEnter the Task to be added : ";
	getline(cin >> ws , task);
	
	Node* Newnode = new Node(task);
	
	if (head == NULL)
		head = Newnode;
	else
	{
		Node* temp = head;
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = Newnode;
	}
}

void List :: Display()
{
	Node* temp = head;
	int i = 0;

	cout<< " \n\n\tIndex\t\t\tTask \t\t\t STATUS \n" ;
	while (temp!= NULL)
	{
		++i;
		cout<<"--------------------------------------------------------------\n";
		cout<<"\t"<<i<<"\t\t"<< temp->task <<"\t\t\t"<<temp->status << endl;
		temp = temp->next;
	}
}

void List :: deleteTask()
{
	Display();
	int index = 1;
	int i = 1;
	cout<<"Enter the Index of task To be Deleted : ";
	cin >> index;
	
	Node* temp = head;
	if (index ==1 )
	{

		head = head->next;
		delete temp;
		return;
	}
	else
	{
		while(i!=index-1)
		{
			temp = temp->next;
			i++;
		}

		Node* del = temp->next;
		temp->next = temp->next->next;
		delete del;
	}
}

void List:: markTask()
{
	int index, input;
	cout <<"Enter the Index of task to be marked : ";
	cin >> index; 
	index--;
	Node* temp= head;
	while (index--)
		temp = temp->next;
	//cout<<"Current Task : " << temp->task <<endl;

	cout<<"Mark Task as \n\n1. Ongoing.\n2. Completed. \nEnter Your choice : ";
	cin >>input;

	switch(input)
	{
		case 1:  temp->status = "Ongoing.\n";
				break;
		case 2:  temp->status = "Completed.\n";
				break;
	}
	cout<<"Task Marked \n";

}

int DisplayMenu()
{
	cout<<"\n\t\t\t MENU\n\t\tChoose the operation to be performed : \n\t\t1] Add Task \n\t\t2] Display Task List \n\t\t";
	cout<<"3] Mark A Task \n\t\t4] Delete a Task \n\t\t5] Exit\n\t\t Enter Your choice : ";
	int ch;
	cin>>ch;
	return ch;
}	
int main()
{
	List L;
	int choice;

	cout<<"\n\t\tWelcome to Your To-Do-List. \n\n";
	do
	{
		choice = DisplayMenu();

		switch(choice)
		{
			case 1: L.addTask();
					break;
			case 2: cout<<"\n\nDisplaying the Tasks\n";
					L.Display();
					break;
			case 3: L.markTask();
					break;
			case 4: L.deleteTask();
					break;
			case 5: cout<<"\nThank You.\n\n";
				exit(0);
		}


	}while (choice !=5);
	return 0;
}