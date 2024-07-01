#include <iostream>
using std::cout;
using std::endl;

//C++ new and delete operators   //ref link:https://www.youtube.com/watch?v=_749lj2yb8Y&list=PLRwVmtr-pp04StYuWs0n765aXyrlL2kl1
//detecting memory leaks/loss by doing profiling and ....

class Person
{
public:
	int age;
	char gender;
};

void main()
{
	//Person p; //put p on the stack
	Person* p = new Person; //put p on the heap but p is a pointer(*)
	(*p).age = 20;
	p->age = 30;
	cout << (*p).age << endl;
	cout << p->age << endl;
	delete p;  // memory management for memory leaks: free p for RAM
	p = new Person;		// when creating new must delete the unused one
	delete p;	// clean up again
}









//void main()
//{
//	//int i = 5;
//	//int i = new int(5); //error:int* i = new int(5);
//	int* i = new int(5);  // i is now a pointer that can be stored in the heap
//	cout << *i << endl;
//	*i = 8;
//	cout << *i << endl;
//	delete i;	//delete memory i if your done with that RAM
//	cout << *i << endl;	//result: undefined
//
//}