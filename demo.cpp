//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
//
//

#include "BookDB.h"

vector<Book> dataBase;
Book book;

int main(){
    while (true) {
        string input;
        int i;
        double d = 0;
        vector<Book> *yearBook;
        cout << ">";
        cin >> input;
        if (dataBase.empty() and (input[0] != 'a' and input[0] != 'q')) {
            cout << "No entries" << endl;
        } else {
            switch (input[0]) {
                case 'P':
                    print(dataBase);
                    break;
                case 'a':
                    cin >> book.ID;
                    cin >> book.year;
                    cin >> book.rating;
                    i = addBook(book.ID, book.year, book.rating, dataBase);
                    if (i == 0) {
                        cout << "Book " << book.ID << " added" << endl;
                    }
                    break;
                case 'd':
                    cin >> book.ID;
                    i = deleteBook(book.ID, dataBase);
                    if (i == 0) {
                        cout << "Book " << book.ID << " removed" << endl;
                    }
                    break;
                case 'u':
                    cin >> book.ID;
                    cin >> book.year;
                    cin >> book.rating;
                    i = updateBook(book.ID, book.year, book.rating, dataBase);
                    if (i == 0) {
                        cout << "Book " << book.ID << " updated" << endl;
                    }
                    break;
                case 'c':
                    d = calculateAverageRating(dataBase);
                    cout << "Average rating = " << d << endl;
                    break;
                case 'f':
                    cin >> book.year;
                    yearBook = findBooks(book.year, dataBase);
                    print(*yearBook);
                    delete yearBook;
                    break;
                case 's':
                    int method;
                    cin >> method;
                    sortDB(dataBase, method);
                    print(dataBase);
                    break;
                case 'q':
                    return 0;
            }
        }
    }
}
