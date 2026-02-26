#pragma once

#include <string>

extern std::string input;

extern std::string program;
extern int patch;
extern int major;
extern int minor;
extern std::string license;
extern std::string developer;

class elements{
public:
	void title(std::string title, std::string subtitle);
	void printLine(char line, int length);
	void menus();
	void interactive();
};
