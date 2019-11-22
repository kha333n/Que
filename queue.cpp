#include "queue.h"

template <class T>
queue<T>::queue()  // NOLINT
{

}

template <class T>
void queue<T>::enqueue(T x)
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


template <class T>
// ReSharper disable once CppNotAllPathsReturnValue
T queue<T>::dequeue()
{
	if (isEmpty())
	{
		cout << "Queue is already empty." << endl;
	}
	else
	{
		T x = arr[front];
		front = (front + 1) % ARRAY_LENGTH;
		elements--;
		return x;
	}

}

template <class T>
T queue<T>::Front() const
{
	return arr[front];
}

template <class T>
bool queue<T>::isEmpty() const
{
	return elements == 0;
}

template <class T>
bool queue<T>::isFull() const
{
	return elements == ARRAY_LENGTH;
}
