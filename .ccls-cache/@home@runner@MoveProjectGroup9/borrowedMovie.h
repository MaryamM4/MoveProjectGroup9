#ifndef BORROWEDMOVIE_H
#define BORROWEDMOVIE_H

#include "Movie.h"
#include <iostream>
#include <string>

class borrowedMovie {
public:
  Movie *movie;
  bool isBorrowed;
};

#endif // BORROWEDMOVIE_H