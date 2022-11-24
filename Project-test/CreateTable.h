#pragma once
#include <iostream>


class CreateTable {
public:
	CreateTable(std::string table_name, std::string name, std::string type, std::string dimension, std::string def);
	void CheckCommand(std::string typedCommand, std::ostream& cout = std::cout);
	void printPoz();
private:
	static std::string command_name;
	std::string table_name;
	static std::string if_not;
	std:: string name;
	std:: string type;
	std::string dimension;
	std::string def;
	
};

