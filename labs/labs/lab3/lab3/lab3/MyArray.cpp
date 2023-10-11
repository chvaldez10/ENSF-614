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

MyArray::MyArray(const MyArray& source) {
	int sourceLength = sizeof(source) / sizeof(source);

	storageM = new EType[sourceLength];
	assert(storageM != nullptr);

	for (int i = 0; i < sourceLength; i++) {
		storageM[i] = source.storageM[i];
	}
}

MyAray::~MyArray() {
	delete[] storageM;
}