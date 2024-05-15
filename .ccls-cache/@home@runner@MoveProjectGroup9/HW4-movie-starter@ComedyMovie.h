#ifndef COMEDYMOVIE_H
#define COMEDYMOVIE_H

#include "Movie.h"
#include <iostream>

class ComedyMovie : Movie {
public:
  ComedyMovie(std::string title, std::string director, int releaseYear)
      : Movie('C', title, director), releaseYear(releaseYear){};

  ComedyMovie(std::string title, std::string director, int stock,
              int releaseYear)
      : Movie('C', title, director, stock), releaseYear(releaseYear){};

  int getReleaseYear() { return releaseYear; };

private:
  int releaseYear;
};

#endif // COMEDYMOVIE_H