//1. WAP to create simple calculator using class

#include <iostream>
using namespace std;

class calculator
{
    
float a, b;
public:

	
	void getval() 
	{
		cout << "Enter First Number: "; 
		cin >> a;
		cout << "Enter Second Number: "; 
		cin >> b;
	}

	
	float add() 
	{
		return a + b;
	}

	
	float sub() 
	{
		return a - b;
	}

	
	float mul() 
	{
		return a * b;
	}

	
	float div() 
	{

			return a / b;

	}
};

int main() 
{
	int ch;
	calculator c; 
	cout << "Enter 1 to Add 2 Numbers" ; 
	cout<< "\nEnter 2 to Subtract 2 Numbers";
	cout<< "\nEnter 3 to Multiply 2 Numbers"; 
	cout<<	"\nEnter 4 to Divide 2 Numbers"; 
	cout<<	"\nEnter 0 To Exit";
		
	do
	{
		cout << "\nEnter Choice: ";
		cin >> ch;
		switch (ch)
		{
		case 1:
            c.getval();	
			cout << "ans: " << c.add() << endl; 
			break;

		case 2:
            c.getval();
			cout << "ans: " << c.sub() << endl; 
			break;
            
		case 3:
			c.getval();
			cout << "ans: " << c.mul() << endl; 
			break;

		case 4:
			c.getval();
			cout << "ans: " << c.div() << endl; 
			break;
		}
		
	} while (ch >= 1 && ch <= 4);
	
	return 0;
}
