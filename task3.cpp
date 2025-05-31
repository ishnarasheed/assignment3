//#include <iostream>
//using namespace std;
//
//const int PATIENTS = 5;
//const int DAYS = 7;
//
//void inputStatus(char status[PATIENTS][DAYS])
//{
//    for (int i = 0; i < PATIENTS; i++)
//    {
//
//        cout << "Enter status (S/C/R) for Patient " << i + 1 << ": ";
//        for (int j = 0; j < DAYS; j++)
//        {
//            cin >> status[i][j];
//        }
//    }
//}
//
//void countStatus(char status[PATIENTS][DAYS])
//{
//    int S = 0, C = 0, R = 0;
//    for (int i = 0; i < PATIENTS; i++)
//    {
//        for (int j = 0; j < DAYS; j++)
//        {
//            if (status[i][j] == 'S')
//            {
//                S++;
//            }
//            else if (status[i][j] == 'C')
//            {
//                C++;
//            }
//            else if (status[i][j] == 'R')
//                R++;
//        }
//        cout << "Total Stable: " << S << ", Critical: " << C << ", Recovered: " << R << endl;
//    }
//}
//
//void criticalDays(char status[PATIENTS][DAYS])
//{
//    for (int i = 0; i < PATIENTS; i++)
//    {
//        int count = 0;
//        for (int j = 0; j < DAYS; j++)
//        {
//            if (status[i][j] == 'C')
//            {
//                count++;
//            }
//        }
//        cout << "Patient " << i + 1 << " had " << count << " critical days.\n";
//    }
//}
//
//int main()
//{
//    char status[PATIENTS][DAYS];
//    inputStatus(status);
//    countStatus(status);
//    criticalDays(status);
//    return 0;
//}
