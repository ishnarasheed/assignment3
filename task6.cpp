#include <iostream>
using namespace std;

const int ROWS = 6;
const int COLS = 4;


void displaySeats(char seats[ROWS][COLS]) 
{
    cout << "\n--- Seating Chart ---\n";
    for (int i = 0; i < ROWS; i++)
    {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < COLS; j++) 
        {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}
void bookSeat(char seats[ROWS][COLS], int row, int col)
{
    if (row >= 1 && row <= ROWS && col >= 1 && col <= COLS) 
    {
        if (seats[row - 1][col - 1] == 'E') 
        {
            seats[row - 1][col - 1] = 'B';
            cout << "Seat at Row " << row << ", Column " << col << " booked successfully.\n";
        }
        else
        {
            cout << "Seat already booked.\n";
        }
    }
    else {
        cout << "Invalid seat location.\n";
    }
}


int countAvailableSeats(char seats[ROWS][COLS])
{
    int count = 0;
    for (int i = 0; i < ROWS; i++)
    {

        for (int j = 0; j < COLS; j++)
        {
            if (seats[i][j] == 'E')
                count++;
        }

    }
    return count;
}


int rowWithMaxEmptySeats(char seats[ROWS][COLS])
{
    int maxEmpty = 0, rowIndex = -1;
    for (int i = 0; i < ROWS; i++) 
    {
        int emptyCount = 0;
        for (int j = 0; j < COLS; j++)
            if (seats[i][j] == 'E')
                emptyCount++;
        if (emptyCount > maxEmpty) 
        {
            maxEmpty = emptyCount;
            rowIndex = i;
        }
    }
    return rowIndex + 1;  
}

int main() {
    char seats[ROWS][COLS];
    // Initialize all seats to 'E'
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            seats[i][j] = 'E';
        }
    }

    displaySeats(seats);
    bookSeat(seats, 2, 3);
    bookSeat(seats, 2, 3); 
    displaySeats(seats);
    cout << "Total available seats: " << countAvailableSeats(seats) << endl;
    cout << "Row with maximum empty seats: Row " << rowWithMaxEmptySeats(seats) << endl;

    return 0;
}
