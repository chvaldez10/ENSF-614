//  mystring2.cpp
// ENSF 614 - Fall 2022 - Lab 6, Ex A

#include "mystring2.h"
#include <cstring>
#include <iostream>
using namespace std;

Mystring::Mystring() { 
    charsM = new char[1]; 
    charsM[0] = '\0';
    lengthM = 0;
}

Mystring::Mystring(const char *s) : lengthM(strlen(s)) {
    charsM = new char[lengthM + 1];
    strcpy_s(charsM, lengthM + 1, s);
}

Mystring::Mystring(int n) : lengthM(n - 1), charsM(new char[n]) {
    memset(charsM, '\0', n);
}


Mystring::Mystring(const Mystring& source): lengthM(source.lengthM), charsM(new char[source.lengthM+1]) {
    strcpy_s (charsM, lengthM + 1, source.charsM);
}

Mystring::~Mystring() {
    delete [] charsM;
}

int Mystring::length() const {
    return lengthM;
}

char Mystring::get_char(int pos) const {
    if (pos < 0 || pos >= length()) {
        cerr << "\nERROR: get_char: the position is out of boundary.";
        return '\0';  // Return null character to indicate an error.
    }
    return charsM[pos];
}

const char* Mystring::c_str() const {
  return charsM;
}

void Mystring::set_char(int pos, char c) {
    if (pos < 0 || pos >= length()) {
        cerr << "\nset_char: the position is out of boundary."
            << " Nothing was changed.";
        return;
    }

    if (c == '\0') { // This check doesn't make sense as it stands, assuming it's meant to check for a non-empty character
        cerr << "\nset_char: char c is empty."
            << " Nothing was changed.";
        return;
    }

    charsM[pos] = c;
}

Mystring& Mystring::operator=(const Mystring& S) {
    if (this != &S) {
        char* new_charsM = new char[S.lengthM + 1];
        strcpy_s(new_charsM, S.lengthM + 1, S.charsM);
        delete[] charsM;
        charsM = new_charsM;
        lengthM = S.lengthM;
    }
    return *this;
}

Mystring& Mystring::append(const Mystring& other) {
    char* tmp = new char[lengthM + other.lengthM + 1];
    strcpy_s(tmp, lengthM + other.lengthM + 1, charsM);
    strcat_s(tmp, lengthM + other.lengthM + 1, other.charsM);
    delete[] charsM;
    charsM = tmp;
    lengthM += other.lengthM;

    return *this;
}


void Mystring::set_str(const char* s) {
    delete[]charsM;
    lengthM = (int)strlen(s);
    charsM = new char[lengthM + 1];
    strcpy_s(charsM, lengthM + 1, s);
}