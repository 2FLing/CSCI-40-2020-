#include "Artist.h"
#include"Artwork.h"
#include<iostream>
// TODO: Define default constructor
Artwork::Artwork()
{
	title = "None";
	yearCreated =0;
	artist = Artist();
}
// TODO: Define second constructor to initialize
//       private fields (title, yearCreated, artist)
Artwork::Artwork(string art_title,int art_year,Artist art_artist)
{
	title = art_title;
	yearCreated = art_year;
	artist = art_artist;
}
// TODO: Define get functions: GetTitle(), GetYearCreated()
string Artwork::GetTitle()
{
	return title;
}
int Artwork::GetYearCreated()
{
	return yearCreated;
}
// TODO: Define PrintInfo() function
void Artwork::PrintInfo()
{
	artist.PrintInfo();
	cout << "Title: " << title << ", " << yearCreated;
}