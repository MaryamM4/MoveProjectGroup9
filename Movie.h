/**
 * Abstract class Movie.
 */

#ifndef MOVIE_H
#define MOVIE_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

class Movie {
public:
  Movie(char genre, std::string title, std::string director)
      : genre(genre), title(title), director(director){};

  Movie(char genre, std::string title, std::string director, int stock)
      : genre(genre), title(title), director(director), availableStock(stock){};

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
  std::vector<Movie *> createMovies(std::ifstream file);
  Movie *createMovie(std::string fileline);

private:
  int availableStock = 0;
  std::string director;
  std::string title;
};

#endif // MOVIE_H