/*
Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.

*/

#include<iostream>
using namespace std;

void getInput(int &n1 , int &n2)
{
	cout<<"\n\nEnter first number : ";
	cin>>n1;
	cout<<"\nEnter Second number : ";
	cin>>n2;
}

char DisplayMenu()
{
	cout<<"\n\t\t\t MENU\n\t\tChoose the operation to be performed : \n\t\t1] Addition \n\t\t2] Subtraction \n\t\t";
	cout<<"3] Multiplication \n\t\t4] Division \n\t\t0] Exit\n\t\t Enter Your choice : ";
	char ch;
	cin>>ch;
	return ch;
}
int main()
{

	int Num1 = 0 , Num2 = 0;
	char choice = ' ';
	cout<<"\n\t\t\tWelcome to Basic Calculator.\n\t\tPlease enter the operands below: \n";
	do
	{
		getInput(Num1 , Num2);
		choice = DisplayMenu();


		switch(choice)
		{
			case '0' : cout<<"\n\tThank you!! Visit Again\n";
						exit(0);
						break; 
			case '1': cout<<"\nAddition is : " << Num1+ Num2;
					break;

			case '2': cout<<"\nSubtraction is : " << Num1- Num2;
					break;

			case '3': cout<<"\nProduct is : " << Num1* Num2;
					break;

			case '4': try
					{
						if (Num2 ==0)
							throw(Num2);

						else 
							cout<<"\nQuotient is : " << (float)Num1 / Num2;
					}
					catch(int &num)
					{
						cout<<"\n\t ERROR :: ILLEGAL OPERATION : Divisor cannot be zero\n ";
						num =1;
					}
					break;
		}
	}while(choice != '0');

	return -1;
}