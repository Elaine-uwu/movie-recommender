#include "movie.h"
#include <iostream>
#include <vector>


int main() {
    std::vector<Movie> movies;

    movies.push_back(Movie(1, "기생충",    "드라마", 2019));
    movies.push_back(Movie(2, "인터스텔라", "SF",    2014));

    movies[0].addRating(4.8);
    // 1. 기생충 (2019)  평점: 4.8 (1건)
    movies[1].addRating(4.9);
    // 2. 인터스텔라 (2014)  평점: 4.9 (1건)

    for (Movie &m : movies) {
        m.display();
    }

    movies[0].addRating(5.0);
    movies[1].addRating(6.0);    // 유효성 검사 → 무시됨

    std::cout << movies[0].getTitle() << ": "
              << movies[0].getAverageRating() << std::endl;
    // 기생충: 4.9  (4.8 + 5.0) / 2


    return 0;
}