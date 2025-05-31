//#include <iostream>
//using namespace std;
//
//const int STUDENTS = 10;
//const int SUBJECTS = 5;
//
//void inputMarks(int marks[STUDENTS][SUBJECTS])
//{
//    for (int i = 0; i < STUDENTS; i++)
//    {
//        cout << "Enter marks for Student " << i + 1 << ": ";
//        for (int j = 0; j < SUBJECTS; j++)
//        {
//            cin >> marks[i][j];
//        }
//    }
//}
//
//void calculateTotalAvg(int marks[STUDENTS][SUBJECTS], int total[STUDENTS], float average[STUDENTS]) {
//    for (int i = 0; i < STUDENTS; i++) 
//    {
//        total[i] = 0;
//        for (int j = 0; j < SUBJECTS; j++)
//        {
//            total[i] += marks[i][j];
//            average[i] = total[i] / (float)SUBJECTS;
//        }
//    }
//}
//
//void TopScorer(int total[STUDENTS])
//{
//    int top = 0;
//    for (int i = 1; i < STUDENTS; i++)
//        if (total[i] > total[top])
//        {
//            top = i;
//        }
//    cout << "Top Scorer: Student " << top + 1 << " with total " << total[top] << endl;
//}
//
//void displayGrades(float average[STUDENTS])
//{
//    for (int i = 0; i < STUDENTS; i++)
//    {
//        cout << "Student " << i + 1 << ": Average = " << average[i] << ", Grade = ";
//        if (average[i] >= 90)
//        {
//            cout << "A";
//        }
//        else if
//            (average[i] >= 75)
//             {
//            cout << "B";
//             }
//        else if (average[i] >= 50)
//        {
//            cout << "C";
//        }
//        else
//        {
//            cout << "F";
//        }
//
//        cout << endl;
//    }
//}
//
//int main()
//{
//    int marks[STUDENTS][SUBJECTS];
//    int total[STUDENTS];
//    float average[STUDENTS];
//
//    inputMarks(marks);
//    calculateTotalAvg(marks, total, average);
//    TopScorer(total);
//    displayGrades(average);
//
//    return 0;
//}
