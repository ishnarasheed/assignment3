//#include <iostream>
//using namespace std;
//
//const int TEAMS = 6;
//const int ROUNDS = 4;
//
//void inputScores(int scores[TEAMS][ROUNDS])
//{
//    for (int i = 0; i < TEAMS; i++)
//    {
//        cout << "Enter scores for Team " << i + 1 << ": ";
//        for (int j = 0; j < ROUNDS; j++)
//            cin >> scores[i][j];
//    }
//}
//
//void totalPerTeam(int scores[TEAMS][ROUNDS], int total[TEAMS]) 
//{
//    for (int i = 0; i < TEAMS; i++)
//    {
//        total[i] = 0;
//        for (int j = 0; j < ROUNDS; j++)
//            total[i] += scores[i][j];
//    }
//}
//
//void findWinner(int total[TEAMS])
//{
//    int winner = 0, runner = 0;
//    for (int i = 1; i < TEAMS; i++)
//    {
//        if (total[i] > total[winner])
//        {
//            runner = winner;
//            winner = i;
//        }
//        else if (total[i] > total[runner] || runner == winner)
//        {
//            runner = i;
//        }
//    }
//    cout << "Winner: Team " << winner + 1 << " with " << total[winner] << " points.\n";
//    cout << "Runner-up: Team " << runner + 1 << " with " << total[runner] << " points.\n";
//}
//
//void lowScores(int scores[TEAMS][ROUNDS])
//{
//    for (int i = 0; i < TEAMS; i++)
//    {
//        bool failed = false;
//        for (int j = 0; j < ROUNDS; j++)
//            if (scores[i][j] <= 10)
//                failed = true;
//        if (failed)
//            cout << "Team " << i + 1 << " failed to score above 10 in any round.\n";
//    }
//}
//
//int main()
//{
//    int scores[TEAMS][ROUNDS], total[TEAMS];
//    inputScores(scores);
//    totalPerTeam(scores, total);
//    findWinner(total);
//    lowScores(scores);
//    return 0;
//}
