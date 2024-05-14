#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "borrowedMovie.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class Customer {
public:
  std::string firstName;
  std::string lastName;
  int UID;
  std::vector<borrowedMovie *> history;

  // Methods
  int getID();
  void borrow(Movie *);
  std::vector<Customer *> getCustomers(std::ifstream file);
  Customer *getCustomer(std::string fileline);
};

#endif // CUSTOMER_H