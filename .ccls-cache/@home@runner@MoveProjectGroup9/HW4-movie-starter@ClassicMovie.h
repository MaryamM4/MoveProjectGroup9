#ifndef CLASSICMOVIE_H
#define CLASSICMOVIE_H

#include "Movie.h"
#include <iostream>

class ClassicMovie : Movie {
public:
  ClassicMovie(std::string title, std::string director,
               std::string actorAndDate)
      : Movie('C', title, director), majorActor_releaseDate(actorAndDate){};

  ClassicMovie(std::string title, std::string director, int stock,
               std::string actorAndDate)
      : Movie('C', title, director, stock),
        majorActor_releaseDate(actorAndDate){};

  std::string getMajorActorReleaseDate();
  char getGenreTag() { return 'C'; };

private:
  std::string majorActor_releaseDate;
};

#endif // CLASSICMOVIE_H