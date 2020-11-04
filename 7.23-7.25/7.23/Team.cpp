#include "Team.h"
// TODO: Implement mutator functions - 
//       SetTeamName(), SetTeamWins(), SetTeamLosses()
// TODO: Implement accessor functions - 
//       GetTeamName(), GetTeamWins(), GetTeamLosses()
// TODO: Implement GetWinPercentage()
#include<iostream>
void Team::SetTeamName(string team_name)
{
	name = team_name;
}
void Team::SetTeamWins(int num_of_wins)
{
	win = num_of_wins;
}
void Team::SetTeamLosses(int num_of_losses)
{
	lose = num_of_losses;
}
string Team::GetTeamName()
{
	return name;
}
int Team::GetTeamWins()
{
	return win;
}
int Team::GetTeamLosses()
{
	return lose;
}
double Team::GetWinPercentage()
{
	return double(win) / (double(win) + double(lose));
}

