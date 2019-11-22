#include "queue.h"

queue::queue()  // NOLINT
{

}

void queue::enqueue(int x)
{
	if (isFull())
	{
		cout << "Queue is full. Cannot enqueue." << endl;
	}
	else
	{
		rear = (rear + 1) % ARRAY_LENGTH;
		arr[rear] = x;
		elements++;
	}

}

int queue::dequeue()
{
	if (isEmpty())
	{
		cout << "Queue is already empty." << endl;
	}
	else
	{
		int x = arr[front];
		front = (front + 1) % ARRAY_LENGTH;
		elements--;
		return x;
	}

}

int queue::Front() const
{
	return arr[front];
}

bool queue::isEmpty() const
{
	return elements == 0;
}

bool queue::isFull() const
{
	return elements == ARRAY_LENGTH;
}
