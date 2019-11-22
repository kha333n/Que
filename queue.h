#pragma once
#define ARRAY_LENGTH 5
#include <iostream>
using namespace std;

class queue
{
private:
	int arr[ARRAY_LENGTH];
	int front = 0, rear = -1, elements = 0;
public:
	queue();
	void enqueue(int);
	int dequeue();
	int Front() const;
	bool isEmpty() const;
	bool isFull() const;
};

