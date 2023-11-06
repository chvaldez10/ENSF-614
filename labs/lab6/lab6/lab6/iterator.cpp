// iterator.cpp
// ENSF 614 - Fall 2022 - Lab 6, Ex A

#include <iostream>
#include <assert.h>
#include "mystring2.h"

using namespace std;

template <class T>
class Vector {
public:
	class VectIter {
		friend class Vector<T>;
	private:
		Vector* v; // points to a vector object of type T
		int index; // represents the subscript number of the vector's array.
	public:
		VectIter(Vector& x) : v(&x), index(0) {}

		T& operator++();
		// PROMISES: increments the iterator's index and return the 
		// value of the element at the index position. If
		// index exceeds the size of the array it will 
		// be set to zero. Which means it will be circulated
		// back to the first element of the vector.

		T operator++(int);
		// PROMISES: returns the value of the element at the index
		// position, then increments the index. If
		// index exceeds the size of the array it will 
		// be set to zero. Which means it will be circulated
		// back to the first element of the vector.

		T& operator--();
		// PROMISES: decrements the iterator index, and return the
		// value of the element at the index. If
		// index is less than zero it will be set to the 
		// last element in the array. Which means it will be
		// circulated to the last element of the vector.

		T operator--(int);
		// PROMISES: returns the value of the element at the index
		// position, then decrements the index. If
		// index is less than zero it will be set to the 
		// last element in the array. Which means it will be
		// circulated to the last element of the vector.

		T& operator*();
		// PROMISES: returns the value of the element at the current 
		// index position.
	};

	Vector(int sz) : size(sz) {
		array = new T[sz];
		assert(array != nullptr);
	}

	~Vector() {
		delete[] array;
	}

	T& operator[](int i);
	// PROMISES: returns existing value in the ith element of 
	// array or sets a new value to the ith element in
	// array. 

	void ascending_sort();
	// PROMISES: sorts the vector values in ascending order. 

private:
	T* array;             // points to the first element of an array of type T
	int size;             // size of array
	void swap(T&, T&);    // swaps the values of two elements in array
};

/***********************************************************************
*
*								Vector
*
***********************************************************************/

template <class T>
T& Vector<T>::operator[](int i){
	return array[i];
}

template <class T>
void Vector<T>::ascending_sort() {
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (array[i] > array[j])
				swap(array[i], array[j]);
}

template <>
void Vector<Mystring>::ascending_sort() {
	//for (int i = 0; i < size - 1; i++)
	//	for (int j = i + 1; j < size; j++)
	//		if (array[i] > array[j])
	//			swap(array[i], array[j]);
}

template <class T>
void Vector<T>::swap(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

/***********************************************************************
 *
 *								VectIter
 *
 ***********************************************************************/

template <class T>
T& Vector<T>::VectIter::operator*() {
	return v->array[index];
}

template <class T>
T& Vector<T>::VectIter::operator++() {
	index++;
	if (index >= v->size) {
		index = 0;
	}
	return v->array[index];
}

template <class T>
T Vector<T>::VectIter::operator++(int) {
	T ret = v->array[index];
	index++;
	if (index >= v->size) {
		index = 0;
	}
	return ret;
}

template <class T>
T& Vector<T>::VectIter::operator--() {
	if (index == 0) {
		index = v->size;
	}
	index--;
	return v->array[index];
}

template <class T>
T Vector<T>::VectIter::operator--(int) {
	T ret = v->array[index];
	if (index == 0) {
		index = v->size;
	}
	index--;
	return ret;
}

/***********************************************************************
 *
 *								  Main
 *
 ***********************************************************************/

int main() {
	Vector<int> x(3);
	x[0] = 999;
	x[1] = -77;
	x[2] = 88;

	Vector<int>::VectIter iter(x);

	cout << "\n\nThe first element of vector x contains: " << *iter << endl;

	#if 1
		cout << "\nTesting an <int> Vector: " << endl;
	
		cout << "\nTesting sort";
		x.ascending_sort();

		cout << "\n\ntesting postfix ++";
		for (int i=0; i<3 ; i++)
			cout << endl << iter++;

		cout << "\n\nTesting Prefix --:";
		for (int i=0; i<3 ; i++)
			cout << endl << --iter;
	
		cout << "\n\nTesting Prefix ++:";
		for (int i=0; i<3 ; i++)
			cout << endl << ++iter;	
	
		cout << "\n\ntesting postfix --";
		for (int i=0; i<3 ; i++)
			cout << endl << iter--;
	
		cout << endl;
	
		cout << "Testing a <Mystring> Vector: " << endl;
		Vector<Mystring> y(3);
		y[0] = "Bar";
		y[1] = "Foo";
		y[2] = "All";;
	
		Vector<Mystring>::VectIter iters(y);
	
		//cout << "\n\nTesting sort";
		//y.ascending_sort();
	
		//for (int i=0; i<3 ; i++)
		//	cout << endl << iters++;
	
		//cout << "\n\nTesting Prefix --:";
		//for (int i=0; i<3 ; i++)
		//	cout << endl << --iters;
	
		//cout << "\n\nTesting Prefix ++:";
		//for (int i=0; i<3 ; i++)
		//	cout << endl << ++iters;
	
		//cout << "\n\nTesting Postfix --";
		//for (int i=0; i<3 ; i++)
		//	cout << endl << iters--;
	
		//cout << endl; cout << "Testing a <char *> Vector: " << endl;
		//Vector<const char*> z(3);
		//z[0] = "Orange";
		//z[1] = "Pear";
		//z[2] = "Apple";;
	
		//Vector<const char*>::VectIter iterchar(z);
	
		//cout << "\n\nTesting sort";
		//z.ascending_sort();
	
		//for (int i=0; i<3 ; i++)
		//	cout << endl << iterchar++;
	
	#endif
		cout << "\n\nProgram Terminated Successfully." << endl;
	
	return 0;
}












