#pragma once
#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector
{
public:
	Vector();
	Vector(const int size);
	Vector(const Vector& obj);

	int getSize();
	void setSize(int size);

	void setData(int* data);
	int* getData();

	int& operator[](const int i);

	~Vector();
private:
	int size_{ 0 };
	int* data_{ nullptr };
};

#endif