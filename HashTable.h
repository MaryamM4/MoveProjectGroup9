/**
Reference(s):
[1] https://www.digitalocean.com/community
    /tutorials/hash-table-in-c-plus-plus

*/

#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "Customer.h"

#define MAXSIZE 75

class HashTable {
  typedef struct tablePair {
    int key;
    Customer *customer;
  } tablePair;

public:
  HashTable();
  ~HashTable();

  bool add(Customer *customer);
  bool remove(Customer *customer);
  bool contains(Customer *customer);

  Customer *retrieveById(int customerID);

  void display();

private:
  Customer **hashtable;

  // Helper method for hasing.
  int hash(Customer *customer);
};

#endif // HASHTABLE_H