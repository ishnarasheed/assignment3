//#include <iostream>
//using namespace std;
//
//const int ROWS = 5, COLS = 5;
//
//
//void displayBooks(char books[ROWS][COLS])
//{
//    cout << "\n--- Library Book Status ---\n";
//    for (int i = 0; i < ROWS; i++) {
//        cout << "Shelf " << i + 1 << ": ";
//        for (int j = 0; j < COLS; j++)
//            cout << books[i][j] << " ";
//        cout << endl;
//    }
//}
//
//void countBooks(char books[ROWS][COLS])
//{
//    int available = 0, issued = 0, missing = 0;
//    for (int i = 0; i < ROWS; i++)
//        for (int j = 0; j < COLS; j++)
//        {
//            if (books[i][j] == 'A')
//                available++;
//            else if (books[i][j] == 'I')
//                issued++;
//            else if (books[i][j] == 'M')
//                missing++;
//        }
//    cout << "\nAvailable: " << available << ", Issued: " << issued << ", Missing: " << missing << endl;
//}
//
//
//void shelfWithMostMissing(char books[ROWS][COLS]) 
//{
//    int maxMissing = 0;
//    cout << "\nShelf(s) with highest missing count: ";
//    for (int i = 0; i < ROWS; i++) 
//    {
//        int count = 0;
//        for (int j = 0; j < COLS; j++)
//            if (books[i][j] == 'M') 
//                count++;
//        if (count > maxMissing)
//            maxMissing = count;
//    }
//    for (int i = 0; i < ROWS; i++)
//    {
//        int count = 0;
//        for (int j = 0; j < COLS; j++)
//            if (books[i][j] == 'M') 
//                count++;
//        if (count == maxMissing && maxMissing > 0)
//            cout << (i + 1) << " ";
//    }
//    if (maxMissing == 0)
//        cout << "None";
//        cout << endl;
//}
//
//int main()
//{
//    char books[ROWS][COLS] =
//    {
//        {'A','I','A','M','A'},
//        {'A','M','A','I','A'},
//        {'I','I','M','M','A'},
//        {'A','A','A','I','A'},
//        {'A','M','A','A','A'},
//    };
//    displayBooks(books);
//    countBooks(books);
//    shelfWithMostMissing(books);
//    return 0;
//}
