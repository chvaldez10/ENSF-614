/*
 * lab2exe_E.cpp
 * Implementation file for complex number module
 *
 * ENSF 614 Lab 2 Exercise E
 */

#include "lab2exe_E.h"

cplx cplx_add(cplx z1, cplx z2)
{
  cplx result;

  result.real = z1.real + z2.real;
  result.imag = z1.imag + z2.imag;
  return result;
}

void cplx_subtract(cplx z1, cplx z2, cplx* difference) {
	difference->real = z1.real - z2.real;
	difference->imag = z1.imag - z2.imag;
}

void cplx_multiply(const cplx* z1, const cplx* z2, cplx* difference) {
	difference->real = (z1->real*z2->real) - (z1->imag*z2->imag);
	difference->imag = (z1->real*z2->imag) + (z1->imag * z2->real);
}