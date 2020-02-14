//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// Made in CLion with commits to GitHub
//

#ifndef A2_CS368_BOOKDB_H
#define A2_CS368_BOOKDB_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Book {
    int ID;
    int year;
    double rating;
};
/*
 * First searches the database for an entry with the given bookID. If no such
 * entry is found, adds a book with the given bookID, year, and rating to the
 * end of the vector and returns 0. If there is already an entry with the
 * given bookID, the list will not be changed and 1 will be returned.
 */
int addBook(int bookID, int year, double rating, vector<Book> &db);

/*
 * Searches the database for an entry with the given bookID. If such an entry
 * is found, updates the rating and the year as per the input and returns 0. If
 * an entry is not found, returns 1.
 */
int updateBook(int bookID, int year, double rating, vector<Book> &db);

/*
 * Searches the database for an entry with the given bookID. If such an entry
 * is found, removes the entry from the database and returns 0. If there is no
 * entry on the list with the given bookID, the list will not be changed and
 * 1 will be returned.
 */
int deleteBook(int bookID, std::vector<Book> &db);

/*
 * Returns a pointer to the vector of Books published in the year specified
 * by the argument.
 */
vector<Book>* findBooks(int year, const vector<Book> &db);

/*
 * Calculates and prints the average rating of all the books in the database.
 * If no books have been added, returns -1.0 and process it as an error
 * in main().
 */
double calculateAverageRating(const vector<Book> &db);

/*
 * Prints the contents of the database in the format specified in the
 * description above to cout. Checks for an empty list before calling this
 * function.
 */
void print(const vector<Book> &db);

/*
 *This functions should takes two arguments: the book database and the
 * user-specified sorting behavior choice. After calling this function, a
 * call to print() from main() will produce a sorted output. If the user
 * enters something other than the three possible numbers for the sort
 * option, returns 1.  Otherwise returns 0.
 */
int sortDB(vector<Book> &db, int sortingMethod);

#endif //A2_CS368_BOOKDB_H
