#include "CreateTable.h"
#include "Commands.h"
#include <string>
#include <iostream>
#include<cstring>

std::string CreateTable::command_name = "CREATE TABLE";
std::string CreateTable::if_not = "IF NOT EXISTS";



CreateTable::CreateTable(std::string table_name, std::string name, std::string type, std::string dimension, std::string def)
{
	this->table_name = table_name;
	this->name = name;
	this->type = type;
	this->dimension = dimension;
	this->def = def;
}

void CreateTable::CheckCommand(std::string typedCommand, std::ostream& cout)
{
	std::string correctCommand = "CREATE TABLE students ((id, integer, 1000, 0), (nume, text, 128, ’’), (grupa, text,50,’1000’))";
	/*std::string typedCommand2 = typedCommand;*/
	std::string cuv, cuv1;
	bool isCorrect;
	Commands c;
	c.myStrtok(correctCommand);
	/*Commands c1;
	c1.myStrtok(typedCommand2);
	bool Commands::strCompare(c,c1);
	*/
	for (int i = 0; i < c.noWords; ++i)
	{
		std::cout << c.token[i];
	}
}

void CreateTable::printPoz() {
	std::cout << "Tabel" << table_name << " created.";
}


int main() {

	std::string typedCommand;
	std::getline(std::cin, typedCommand);
	std::cout << typedCommand;
	CreateTable table = new CreateTable("student", "sjf", "adg", "sdgh", "sdgh");
	table[0].CheckCommand(typedCommand);
	
}
