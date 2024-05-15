#ifndef STORE_H
#define STORE_H

#include "HashTable.h"
#include "Inventory.h"
#include <fstream>

class Store {
public:
  ~Store();

  bool buildFromFiles(std::string customerFilename, std::string movieFilename,
                      std::string commandsFilename);

  // Command-related functions:
  void viewInventory();
  void viewCustomerHistory(std::string command);
  bool borrowMovie(std::string command);
  bool returnMovie(std::string command);

private:
  HashTable customers;
  Inventory inventory;
};

#endif // STORE_H