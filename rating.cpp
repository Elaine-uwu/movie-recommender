#include "rating.h"
#include <iostream>

Rating::Rating() : userId(0), movieId(0), score(0.0) {}

Rating::Rating(int userId, int movieId, double score)
    : userId(userId), movieId(movieId), score(score) {
  if (score < 0.0 || score > 5.0) {
    this->score = 0.0;
  }
}

int Rating::getUserId() const { return userId; }

int Rating::getMovieId() const { return movieId; }

double Rating::getScore() const { return score; }

void Rating::display() const {
  std::cout << "User ID: " << userId << ", Movie ID: " << movieId
            << ", Score: " << score << std::endl;
}