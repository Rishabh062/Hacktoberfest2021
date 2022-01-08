#include <iostream>
#include <stdio.h>
#include <cmath>

int main() {
  unsigned long long n;
  std::cout << "Welcome to a Nicomachu's Theorem calculator.\n";
  std::cout << "This calculator solves problems in the general format of 1^3 + 2^3 + 3^3 ... + n^3.\n";
  std::cout << "What is n equal to? ";
  std::cin >> n;
  unsigned long long res = pow((n * (n + 1) / 2), 2);
  printf("Your equation is equal to %llu\n", res);
  return 0;
}
