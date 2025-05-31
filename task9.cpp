//#include <iostream>
//using namespace std;
//
//const int SHIFTS = 3, DAYS = 7;
//
//void inputDefects(float defects[SHIFTS][DAYS])
//{
//    cout << "\n--- Enter defect percentages for 3 shifts and 7 days ---\n";
//    for (int i = 0; i < SHIFTS; i++)
//    {
//        cout << "Shift " << i + 1 << ":\n";
//        for (int j = 0; j < DAYS; j++)
//        {
//            cout << "  Day " << j + 1 << ": ";
//            cin >> defects[i][j];
//        }
//    }
//}
//
//void avgPerShift(float defects[SHIFTS][DAYS])
//{
//    cout << "\n--- Average defects per shift ---\n";
//    for (int i = 0; i < SHIFTS; i++)
//    {
//        float sum = 0;
//        for (int j = 0; j < DAYS; j++)
//            sum += defects[i][j];
//        float avg = sum / DAYS;
//       
//        avg = (int)(avg * 100 + 0.5) / 100.0;
//        cout << "Shift " << i + 1 << ": " << avg << "%\n";
//    }
//}
//
//
//void avgPerDay(float defects[SHIFTS][DAYS])
//{
//    cout << "\n--- Average defects per day ---\n";
//    for (int j = 0; j < DAYS; j++) 
//    {
//        float sum = 0;
//        for (int i = 0; i < SHIFTS; i++)
//        sum += defects[i][j];
//        float avg = sum / SHIFTS;
//        
//        avg = (int)(avg * 100 + 0.5) / 100.0;
//        cout << "Day " << j + 1 << ": " << avg << "%\n";
//    }
//}
//
//
//void criticalShifts(float defects[SHIFTS][DAYS]) 
//{
//    cout << "\n--- Critical Shifts (>10% avg defect) ---\n";
//    for (int i = 0; i < SHIFTS; i++) 
//    {
//        float sum = 0;
//        for (int j = 0; j < DAYS; j++)
//         sum += defects[i][j];
//        float avg = sum / DAYS;
//        avg = (int)(avg * 100 + 0.5) / 100.0;
//        if (avg > 10.0)
//            cout << "Shift " << i + 1 << " (avg " << avg << "%)\n";
//    }
//}
//
//int main()
//{
//    float defects[SHIFTS][DAYS];
//    inputDefects(defects);
//    avgPerShift(defects);
//    avgPerDay(defects);
//    criticalShifts(defects);
//    return 0;
//}
