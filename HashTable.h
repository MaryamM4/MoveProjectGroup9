/**
HashTable with
separate-chaining collision resolution technique.

NOTE: HashTable is in a placeholder state,
and may be prone to changes.

Reference(s):
[1] https://www.digitalocean.com/community/tutorials/hash-table-in-c-plus-plus
[2] https://www.softwaretestinghelp.com/hash-table-cpp-programs/
[3]
https://www.geeksforgeeks.org/implementation-of-hash-table-in-c-using-separate-chaining/
*/

#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "Customer.h"

#define MAXSIZE 75

class HashTable {
  typedef struct tablePair {
    int key;
    Customer *customer;
    tablePair *nextPair;

  } tablePair;

public:
  HashTable();
  ~HashTable();

  bool add(Customer *customer);
  bool remove(Customer *customer);
  bool removeByKey(int customerID);
  bool contains(Customer *customer);

  Customer *retrieveByKey(int customerID);

  void display();

private:
  tablePair **hashtable;

  // Helper method for hasing.
  int hash(Customer *customer);
};

#endif // HASHTABLE_H