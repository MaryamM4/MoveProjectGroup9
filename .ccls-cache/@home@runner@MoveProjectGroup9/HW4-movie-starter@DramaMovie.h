#ifndef DRAMAMOVIE_H
#define DRAMAMOVIE_H

#include "Movie.h"
#include <iostream>

class DramaMovie : Movie {
public:
  DramaMovie(std::string title, std::string director, int releaseYear)
      : Movie('C', title, director), releaseYear(releaseYear){};

  DramaMovie(std::string title, std::string director, int stock,
             int releaseYear)
      : Movie('C', title, director, stock), releaseYear(releaseYear){};

  int getReleaseYear() { return releaseYear; };
  char getGenreTag() { return 'D'; };

private:
  int releaseYear;
};

#endif // DRAMAMOVIE_H