#ifndef TEAMH
#define TEAMH
#include<string>
using namespace std;
class Team {
	// TODO: Declare private data members - teamName, teamWins, teamLosses

	// TODO: Declare mutator functions - 
	//       SetTeamName(), SetTeamWins(), SetTeamLosses()

	// TODO: Declare accessor functions - 
	//       GetTeamName(), GetTeamWins(), GetTeamLosses()

	// TODO: Declare GetWinPercentage()

private:
	string name;
	int win;
	int lose;
public:
	void SetTeamName(string team_name);
	void SetTeamWins(int num_of_wins);
	void SetTeamLosses(int num_of_losses);
	string GetTeamName();
	int GetTeamWins();
	int GetTeamLosses();
	double GetWinPercentage();
};

#endif