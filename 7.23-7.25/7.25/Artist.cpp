#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

// TODO: Define default constructor
Artist::Artist()
{
	artistName = "None";
	birthYear = 0;
	deathYear = 0;
}
// TODO: Define second constructor to initialize
//       private fields (artistName, birthYear, deathYear)
Artist::Artist(string name,int b_year,int d_year)
{
	artistName = name;
	birthYear = b_year;
	deathYear = d_year;
}
// TODO: Define get functions: GetName(), GetBirthYear(), GetDeathYear()
string Artist::GetName() const
{
	return artistName;
}
int Artist::GetBirthYear() const
{
	return birthYear;
}
int Artist::GetDeathYear() const
{
	return deathYear;
}
// TODO: Define PrintInfo() function
//      If deathYear is entered as -1, only print birthYear
void Artist::PrintInfo() const
{
	if (deathYear == -1)
		cout << "Artist: " << artistName << ", " << "born " << birthYear << endl;
	else
		cout << "Artist: " << artistName << " " << "(" << birthYear <<"-"<<deathYear<< ")"<<endl;
}