#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "borrowedMovie.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class Customer {
public:
  int getID() { return UID; };
  std::string getFirstName() { return firstName; }
  std::string getLastName() { return lastName; }

  void displayHistory();

  bool isBorrowing(Movie *movie);

  bool borrowMovie(Movie *movie);
  bool returnMovie(Movie *movie);

  // Factory methods
  std::vector<Customer *> getCustomers(std::ifstream file);
  Customer *getCustomer(std::string fileline);

private:
  std::string firstName;
  std::string lastName;
  int UID;
  std::vector<borrowedMovie *> history;
};

#endif // CUSTOMER_H