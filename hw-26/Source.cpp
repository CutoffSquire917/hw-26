#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
	Queue<string>* q1 = new Queue<string>();
	q1->Enqueue(MyValue<string>("Hello world!"));
	cout << q1->GetFirst().GetValue() << endl;
	q1->Dequeue();
	delete q1;
}