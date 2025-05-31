//#include <iostream>
//using namespace std;
//
//const int ITEMS = 4;
//const int DAYS = 7;
//
//void inputSales(float sales[ITEMS][DAYS])
//{
//    for (int i = 0; i < ITEMS; i++) 
//    {
//        cout << "Enter sales for Item " << i + 1 << " for 7 days: ";
//        for (int j = 0; j < DAYS; j++)
//            cin >> sales[i][j];
//    }
//}
//
//void totalPerItem(float sales[ITEMS][DAYS])
//{
//    for (int i = 0; i < ITEMS; i++) 
//    {
//        float total = 0;
//        for (int j = 0; j < DAYS; j++)
//        {
//            total += sales[i][j];
//            cout << "Total sales for Item " << i + 1 << ": " << total << endl;
//        }
//    }
//}
//
//void totalPerDay(float sales[ITEMS][DAYS]) 
//{
//    for (int j = 0; j < DAYS; j++)
//    {
//        float total = 0;
//        for (int i = 0; i < ITEMS; i++)
//        {
//            total += sales[i][j];
//        }
//        cout << "Total sales on Day " << j + 1 << ": " << total << endl;
//    }
//}
//
//void highestSales(float sales[ITEMS][DAYS]) 
//{
//    int bestDay = 0;
//    float maxDayTotal = 0;
//    for (int j = 0; j < DAYS; j++)
//    {
//        float total = 0;
//        for (int i = 0; i < ITEMS; i++)
//        {
//            total += sales[i][j];
//        }
//        if (total > maxDayTotal) 
//        {
//            maxDayTotal = total;
//            bestDay = j;
//        }
//    }
//
//    int bestItem = 0;
//    float maxItemTotal = 0;
//    for (int i = 0; i < ITEMS; i++)
//    {
//        float total = 0;
//        for (int j = 0; j < DAYS; j++)
//        {
//            total += sales[i][j];
//        }
//            if (total > maxItemTotal)
//            {
//                maxItemTotal = total;
//                bestItem = i;
//            }
//        
//    }
//
//    cout << "Highest total sales on Day " << bestDay + 1 << " with " << maxDayTotal << endl;
//    cout << "Most sold Item is Item " << bestItem + 1 << " with total " << maxItemTotal << endl;
//}
//
//int main() 
//{
//    float sales[ITEMS][DAYS];
//    inputSales(sales);
//    totalPerItem(sales);
//    totalPerDay(sales);
//    highestSales(sales);
//    return 0;
//}
