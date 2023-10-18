#pragma once
#include <iostream>

template<typename T>
class Container
{
private:
	T* data;
	size_t size;
	size_t capacity = 10;
public:
	Container()
	{
		data = new T(capacity);
		
	}

	void push(T e);
	T get(size_t pos);
	void resize(size_t new_capacity);
};

template<typename T>
void Container<T>::push(T e)
{
	if (size == capacity)
		resize(2 * capacity);
	data[size] = e;
	size++;
	//for (size_t i = 0; i < size; i++)
	//{
	//	std::cout << data[i];
	//}
	//std::cout << "\n";
}

template<typename T>
T Container<T>::get(size_t pos)
{
	return data[pos];
}

template<typename T>
void Container<T>::resize(size_t new_capacity)
{
	capacity = new_capacity;
	T* new_data = new T(capacity);
	for (size_t i = 0; i < size; i++)
	{
		new_data[i] = data[i];
	}
	
	data = new_data;
}
