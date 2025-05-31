//#include <iostream>
//using namespace std;
//
//const int SIZE = 5;
//
//void inputTemp(float temp[SIZE][SIZE])
//{
//    cout << "Enter temperatures:\n";
//    for (int i = 0; i < SIZE; i++)
//    {
//        for (int j = 0; j < SIZE; j++)
//        {
//            cin >> temp[i][j];
//        }
//    }
//}
//
//void averageZone(float temp[SIZE][SIZE])
//{
//    for (int i = 0; i < SIZE; i++)
//    {
//        float sum = 0;
//        for (int j = 0; j < SIZE; j++)
//        {
//            sum += temp[i][j];
//        }
//            cout << "Average temperature for Zone " << i + 1 << ": " << sum / SIZE << endl;
//        
//    }
//}
//
//void extremeSpots(float temp[SIZE][SIZE])
//{
//    float max = temp[0][0];
//    float min = temp[0][0];
//    int maxI = 0;
//    int maxJ = 0;
//    int minI = 0;
//    int minJ = 0;
//    for (int i = 0; i < SIZE; i++)
//    {
//        for (int j = 0; j < SIZE; j++)
//        {
//            if (temp[i][j] > max) 
//            { 
//                max = temp[i][j]; 
//                maxI = i;
//                maxJ = j; 
//            }
//            if (temp[i][j] < min)
//            {
//                min = temp[i][j];
//                minI = i;
//                minJ = j;
//            }
//        }
//        cout << "Extreme Hot Spot at (" << maxI + 1 << "," << maxJ + 1 << ") : " << max << endl;
//        cout << "Extreme Cold Spot at (" << minI + 1 << "," << minJ + 1 << ") : " << min << endl;
//    }
//}
//
//int main()
//{
//    float temp[SIZE][SIZE];
//    inputTemp(temp);
//    averageZone(temp);
//    extremeSpots(temp);
//    return 0;
//}
