#pragma once

class Commands {
public:
	
	void myStrtok(std::string input);
	bool strCompare(std::string string1, std::string string2);

private:
	std::string input;
	int noWords;
	std::string token[];

};