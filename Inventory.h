#ifndef INVENTORY_H
#define INVENTORY_H

#include "ClassicMovie.h"
#include "ComedyMovie.h"
#include "DramaMovie.h"
#include "Movie.h"

class Inventory {
  Inventory();
  ~Inventory();

  // Only change movie's availableStock count.
  bool borrowMovie(Movie *movie);
  bool returnMovie(Movie *movie);

private:
  std::vector<ComedyMovie *> comedyMovies;
  std::vector<ClassicMovie *> classicMovies;
  std::vector<DramaMovie *> dramaMovies;
};

#endif // INVENTORY_H