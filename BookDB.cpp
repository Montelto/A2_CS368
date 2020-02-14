//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
// https://canvas.wisc.edu/courses/188843/files for slides
// Made in CLion with commits to GitHub
//

#include "BookDB.h"

int addBook(int bookID, int year, double rating, vector<Book> &db) {
    for (auto &itr : db) {
        if (itr.ID == bookID) {
            return 1;
        }
    }
    Book b = {bookID, year, rating};
    db.push_back(b);
    return 0;
}

int updateBook(int bookID, int year, double rating, vector<Book> &db) {
    for (auto &itr : db) {
        if (itr.ID == bookID) {
            itr.year = year;
            itr.rating = rating;
            return 0;
        }
    }
    return 1;
}

int deleteBook(int bookID, vector<Book> &db) {
    for (auto itr = db.begin(); itr != db.end(); ++itr) {
        if (itr->ID == bookID) {
            db.erase(itr);
            return 0;
        }
    }
    return 1;
}

vector<Book>* findBooks(int year, const vector<Book> &db) {
    auto *booksByYear = new vector<Book>;
    for (auto &itr : db) {
        if (itr.year == year) {
            booksByYear->push_back(itr);
        }
    }
    return booksByYear;
}

double calculateAverageRating(const vector<Book> &db) {
    if (db.empty())
        return -1.0;
    double totalRating = 0.0;
    for (auto &itr : db) {
        totalRating += itr.rating;
    }
    return totalRating / db.size();
}

void print(const vector<Book> &db) {
    for (auto &itr : db) {
        cout << itr.ID << ", " << itr.year << ", " << itr.rating << endl;
    }
}

bool bookIDSort(const Book &a, const Book &b) {return a.ID < b.ID;}

bool bookYearSort(const Book &a, const Book &b) {
    if (a.year == b.year)
        return a.ID < b.ID;
    return a.year < b.year;
}

bool bookRatingSort(const Book &a, const Book &b) {
    if (a.rating == b.rating)
        return a.ID < b.ID;
    return a.rating < b.rating;
}

int sortDB(vector<Book> &db, int sortingMethod) {
    switch (sortingMethod) {
        case 1:
            sort(db.begin(), db.end(), bookIDSort);
            return 0;
        case 2:
            sort(db.begin(), db.end(), bookYearSort);
            return 0;
        case 3:
            sort(db.begin(), db.end(), bookRatingSort);
            return 0;
        default:
            return 1;
    }
}
