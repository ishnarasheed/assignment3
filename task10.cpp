//#include <iostream>
//using namespace std;
//
//const int CANDIDATES = 4, STATIONS = 6;
//
//
//void inputVotes(int votes[CANDIDATES][STATIONS]) 
//{
//    cout << "\n--- Enter votes for 4 candidates at 6 stations ---\n";
//    for (int i = 0; i < CANDIDATES; i++)
//    {
//        cout << "Candidate " << i + 1 << ":\n";
//        for (int j = 0; j < STATIONS; j++) 
//        {
//            cout << "  Station " << j + 1 << ": ";
//            cin >> votes[i][j];
//        }
//    }
//}
//
//void totalVotesPerCandidate(int votes[CANDIDATES][STATIONS])
//{
//    cout << "\n--- Total votes per candidate ---\n";
//    for (int i = 0; i < CANDIDATES; i++) 
//    {
//        int sum = 0;
//        for (int j = 0; j < STATIONS; j++) sum += votes[i][j];
//        cout << "Candidate " << i + 1 << ": " << sum << " votes\n";
//    }
//}
//
//void totalVotesPerStation(int votes[CANDIDATES][STATIONS]) 
//{
//    cout << "\n--- Total votes per station ---\n";
//    for (int j = 0; j < STATIONS; j++)
//    {
//        int sum = 0;
//        for (int i = 0; i < CANDIDATES; i++) 
//            sum += votes[i][j];
//        cout << "Station " << j + 1 << ": " << sum << " votes\n";
//    }
//}
//
//void identifyWinners(int votes[CANDIDATES][STATIONS])
//{
//    int totals[CANDIDATES] = { 0 };
//    for (int i = 0; i < CANDIDATES; i++)
//    {
//        for (int j = 0; j < STATIONS; j++)
//            totals[i] += votes[i][j];
//    }
//    int maxVotes = totals[0];
//    for (int i = 1; i < CANDIDATES; i++)
//        if (totals[i] > maxVotes)
//            maxVotes = totals[i];
//    cout << "\n--- Winner(s) with " << maxVotes << " votes ---\n";
//    for (int i = 0; i < CANDIDATES; i++)
//        if (totals[i] == maxVotes)
//            cout << "Candidate " << i + 1 << endl;
//}
//
//
//void lowTurnout(int votes[CANDIDATES][STATIONS]) {
//    cout << "\n--- Stations with voter turnout < 100 ---\n";
//    for (int j = 0; j < STATIONS; j++) 
//    {
//        int sum = 0;
//        for (int i = 0; i < CANDIDATES; i++)
//            sum += votes[i][j];
//        if (sum < 100) cout << "Station " << j + 1 << " (Total: " << sum << ")\n";
//    }
//}
//
//int main() 
//{
//    int votes[CANDIDATES][STATIONS];
//    inputVotes(votes);
//    totalVotesPerCandidate(votes);
//    totalVotesPerStation(votes);
//    identifyWinners(votes);
//    lowTurnout(votes);
//    return 0;
//}
