// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
for (int i=1; i<n; i++)
  value*=value;
  return value;
}

uint64_t fact(uint16_t n) {
  if (n<=1)
    return 1;
  else
    return n*fact(n-1);

}

double calcItem(double x, uint16_t n) {
  return pown(x,n)/fact(n);
}

double expn(double x, uint16_t count) {
  double sum=0;
  for (int i=0; i<count; i++)
    sum+=calcItem(x,count);
  return sum;
}

double sinn(double x, uint16_t count) {
  double sum=0;
  for (int i=1; i<count/2; i++)
    sum+=calcItem(x,count*2-1);
  return sum;
}

double cosn(double x, uint16_t count) {
  double sum=0;
  for (int i=0; i<count/2; i++)
    sum+=calcItem(x,count*2);
  return sum;
}
