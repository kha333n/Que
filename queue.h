#pragma once
constexpr auto ARRAY_LENGTH = 5;
#include <iostream>
using namespace std;

template <class T>
class queue
{
private:
	T arr[ARRAY_LENGTH];
	int front = 0, rear = -1, elements = 0;
public:
	queue();
	void enqueue(T);
	T dequeue();
	T Front() const;
	bool isEmpty() const;
	bool isFull() const;
};

