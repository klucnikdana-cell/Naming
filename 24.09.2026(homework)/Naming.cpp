#include <iostream>
#include <stdexcept>
#include <exception>
using namespace std;


/*double devide(double num1, double num2)
{
	if (num2 == 0)
	{
		throw runtime_error("Error: Zerodivision");
	}
}*/ //111

//class DatabaseConnectionException : public exception
//{
//private:
//	string message;
//public:
//	DatabaseConnectionException(const string& msg) : message(msg){}
//
//	const char* what() const noexcept override
//	{
//		return message.c_str();
//	}
//};
//
//
//
//class Stack
//{
//private:
//	char* elements;
//	int size;
//	int count;
//public:
//	Stack(int Newsize)
//	{
//		elements = new char[Newsize];
//		size = Newsize;
//		count = 0;
//	}
//
//	void Push(char value)
//	{
//		if (count >= size)
//		{
//			throw DatabaseConnectionException("Stack is full");
//		}
//		elements[count] = value;
//		count++;
//	}
//
//	void Pop()
//	{
//		if (count == 0)
//		{
//			throw DatabaseConnectionException("Stack is empty");
//		}
//
//		count--;
//	}
//
//	int GetCount()
//	{
//		return count;
//	}
//
//	bool IsEmpty()
//	{
//		return count == 0;
//	}
//
//	bool IsFull()
//	{
//		return count == size;
//	}
//
//	void Clear()
//	{
//		count = 0;
//	}
//
//	char Top()
//	{
//		if (count == 0)
//		{
//			throw DatabaseConnectionException("Stack is empty");
//		}
//		return elements[count - 1];
//	}
//};



class Stack 
{ 
private: 
char* elements; 
int size; 
int count; 
public: 
	Stack(int Newsize) 
	{ 
		size = Newsize;
		count = 0; 
		elements = new char[Newsize];
	} 
	void Push(char value) 
	{
		if (count >= size)
		{ 
			throw runtime_error("Error: Stack is full");
		} 
		elements[count] = value; 
		count++;
	} 
	void Pop() 
	{
		if (count == 0)
		{
			throw runtime_error("Error: Stack is empty");
		}
		count--;
	} 
	int GetCount()
	{ 
		return count; 
	} 
	bool IsEmpty() 
	{
		return count == 0;
	} 
	bool IsFull()
	{
		return count == size; 
	} 
	void Clear()
	{
		count = 0;
	} 
	char Top()
	{
		if (count == 0) 
		{ throw runtime_error("Error: Stack is empty");
		} 
		return elements[count - 1]; 
	} 
};







int main()
{
	///*Stack stack(5);*/
	//try
	//{
	//	Stack stack(3);

	//	stack.Push('A');
	//	stack.Push('B');
	//	stack.Push('C');

	//	cout << "Count: " << stack.GetCount() << endl;
	//	cout << "Top: " << stack.Top() << endl;

	//	stack.Push('D');
	//}
	//catch(const DatabaseConnectionException& e)
	//{
	//	cout << "Exception: " << e.what() << endl;
	//}
	//
	//cout << "Application running..." << endl;


	

	Stack stack(5);
	try 
	{ 
		stack.Push('A');
		stack.Push('B');
		stack.Push('C');

		cout << "Count: " << stack.GetCount() << endl; 
		cout << "Top: " << stack.Top() << endl; 

		stack.Pop(); 
		
		cout << "Top: " << stack.Top() << endl;

		stack.Clear();

		cout << "Is empty: " << stack.IsEmpty() << endl; 
		stack.Pop(); 
	}
	catch (const runtime_error& e) 
	{
		cout << "Exception: " << e.what() << endl; 
	}
}


