#include "MileageTrackerNode.h"
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	// References for MileageTrackerNode objects
	MileageTrackerNode* headNode;
	MileageTrackerNode* currNode;
	MileageTrackerNode* lastNode;

	double miles;
	string date;
	int i;

	// Front of nodes list
	headNode = new MileageTrackerNode();
	lastNode = headNode;

	// TODO: Read in the number of nodes
	cin >> i;
	// TODO: For the read in number of nodes, read
	//       in data and insert into the linked list
	for (int num = 0; num < i; num++)
	{
		cin >> miles;
		cin >> date;
		if (num==0)
		{
			lastNode= new MileageTrackerNode(miles, date);
			headNode = lastNode;
		}
		else
		{
			currNode=new  MileageTrackerNode(miles, date);
			lastNode->InsertAfter(currNode);
			lastNode = lastNode->GetNext();
		}
		
	}
	currNode = headNode;
	// TODO: Call the PrintNodeData() method
	//       to print the entire linked list
	for (int num = 0; num < i; num++)
	{
		if(currNode!=NULL)
			currNode->PrintNodeData();
		currNode = currNode->GetNext();
	}
	// MileageTrackerNode Destructor deletes all
	//       following nodes

	delete headNode;
}