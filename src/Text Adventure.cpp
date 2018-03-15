//============================================================================
// Name        : Text.cpp
// Author      : Joel
// Version     :
// Copyright   : Please no steal
// Description : Basic text based game
//============================================================================

#include <iostream>
#include "Player.h"
#include "Chapter1/Chapter1.h"

using namespace std;
//using namespace ;

int main() {

	std::string in;
	std::string pname;
	std::string prace;
	std::string gen;
	bool isMale;

	while(in != "Start")
	{
		std::cout << "Hello and welcome to Joel's Text Adventure." << std::endl;
		std::cout << "Type Start(case sensitive) to continue." << std::endl;
		std::cin >> in;
	}

	std::cout << "What is your name Hero?" << std::endl;
	std::cin >> pname;
	std::cout << "What is your race?" << std::endl << "That choices are: " << std::endl;
	std::cout << "1.Human " << std::endl;
	std::cout << "2.Elf " << std::endl;
	std::cout << "3.Dwarf " << std::endl;
	std::cout << "4.Orc " << std::endl;
	std::cin >> prace;

	std::cout<< "Are you Male or Female?" <<std::endl;
	std::cin >> gen;

	if(gen == "Male" || gen == "male")
	{
		isMale = true;
	}
	else
	{
		isMale = false;
	}

	Player::Player* player;

	std::cout<<"Your stats are: "<<std::endl;

	player = new Player::Player(pname,prace,isMale);

	player->retStats();

	std::string start;

	std::cout << "Type begin to continue."<< std::endl;

	std::cin >> start;

	chapter::Chapter1* chap1;
	chap1 = new chapter::Chapter1(player);

	return 0;
}
