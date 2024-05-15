/**
 * Abstract class Movie.
 */

#ifndef MOVIE_H
#define MOVIE_H

// Needed for factory methods.
#include "ClassicMovie.h"
#include "ComedyMovie.h"
#include "DramaMovie.h"

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class Movie {
public:
  Movie(std::string title, std::string director)
      : title(title), director(director){};

  Movie(std::string title, std::string director, int stock)
      : title(title), director(director), availableStock(stock){};

  // Change the available stock:
  bool borrowMovie();
  bool returnMovie();

  void addToStock(int num);

  // Getter methods:
  std::string getTitle() { return title; };
  std::string getDirector() { return director; };
  int getStock() { return availableStock; };

  // Pure virtual function, can only be implemented by children.
  virtual char getGenreTag() = 0;

  // Factory Methods:
  static std::vector<Movie *> createMovies(std::ifstream file);
  static Movie *createMovie(std::string fileline);

private:
  int availableStock = 0;
  std::string director;
  std::string title;
};

#endif // MOVIE_H