//
// Joseph McFarland
// 9072511679
// mcfarland3@wis.edu
//
//

#include "BookDB.h"

vector<Book> dataBase;

int main(){
    addBook(1,2,3.1,dataBase);
    addBook(2,3,4.3,dataBase);
    cout << dataBase.capacity() << endl;
    cout << dataBase[0].rating << endl;
    deleteBook(1,dataBase);
    cout << dataBase[0].rating << endl;
    cout << dataBase.size() << endl;
}