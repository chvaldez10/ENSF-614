/*
 * MyArray.cpp
 * Implementation of MyArray class
 * Assignment: Lab 3 Exercise D
 * Section: B01
 * Completed by: Alton Wong and Christian Valdez
 * Submission date: October 13, 2023
 */


#include "MyArray.h"
#include <assert.h>     
#include <array> 

MyArray::MyArray() : sizeM(0), storageM(new EType[1]) {
	storageM[0] = {};
}


MyArray::MyArray(const EType* builtin, int sizeA) : sizeM(sizeA){
	// check for bad input
	assert(sizeA >= 0);
	assert(builtin != nullptr || sizeA == 0);
	
	storageM = new EType[sizeA];
	for (int i = 0; i < sizeA; i++) {
		storageM[i] = builtin[i];
	}
}

MyArray::MyArray(const MyArray& source) : sizeM(source.sizeM){
	storageM = new EType[sizeM];
	assert(storageM != nullptr);

	for (int i = 0; i < sizeM; i++) {
		storageM[i] = source.storageM[i];
	}
}

MyArray& MyArray::operator = (const MyArray& rhs) {
	if (this != &rhs) {
		delete[] storageM;
		sizeM = rhs.sizeM;
		storageM = new EType[sizeM];
		assert(storageM != nullptr);

		for (int i = 0; i < sizeM; i++) {
			storageM[i] = rhs.storageM[i];
		}
	}

	return *this;
}

MyArray::~MyArray() {
	delete[] storageM;
}

int MyArray::size() const{ 
	return sizeM;
}

EType MyArray::at(int i) const{
	assert(i>=0 && i < sizeM);
	return storageM[i];
}

void MyArray::set(int i, EType new_value) {
	assert(i >= 0 && i < sizeM);
	storageM[i] = new_value;
}

void MyArray::resize(int new_size) {
	assert(new_size >= 0);

	if (new_size == sizeM) {
		return;
	}

	EType* temp_array = new EType[new_size];

	int elements_to_copy = (new_size < sizeM) ? new_size : sizeM;

	for (int i = 0; i < elements_to_copy; i++) {
		temp_array[i] = storageM[i];
	}

	delete[] storageM;
	storageM = temp_array;
	sizeM = new_size;
}