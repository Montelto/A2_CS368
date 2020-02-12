//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
//
//

#ifndef A2_CS368_BOOKDB_H
#define A2_CS368_BOOKDB_H

#include <iostream>
#include <vector>

using namespace std;

struct Book {
    int ID;
    int year;
    double rating;
};

int addBook(int bookID, int year, double rating, vector<Book> &db);

int updateBook(int bookID, int year, double rating, vector<Book> &db);

int deleteBook(int bookID, std::vector<Book> &db);

vector<Book>* findBooks(int year, const vector<Book> &db);

double calculateAverageRating(const vector<Book> &db);

void print(const vector<Book> &db);

int sortDB(vector<Book> &db, int sortingMethod);

#endif //A2_CS368_BOOKDB_H
