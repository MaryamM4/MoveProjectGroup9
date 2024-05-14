#ifndef MOVIE_H
#define MOVIE_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class Movie {
public:
  char genre;
  int availableStock;
  std::string director;
  std::string title;

  // Getter methods:
  char getKind();
  std::string getTitle();
  std::string getDirector();
  int getStock();

  // Factory Methods:
  std::vector<Movie *> getMovies(std::ifstream file);
  Movie *getMovie(std::string fileline);
};

#endif // MOVIE_H