// Que.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "queue.cpp"

int main()
{
	queue<int> q1;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.enqueue(4);
	q1.enqueue(5);
	q1.enqueue(6);
	cout << q1.dequeue() << endl;
	cout << q1.dequeue() << endl;
	cout << q1.Front() << endl;
	q1.enqueue(7);
	q1.enqueue(8);
	q1.enqueue(9);
	while (!(q1.isEmpty()))
	{
		cout << q1.dequeue() << endl;
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
