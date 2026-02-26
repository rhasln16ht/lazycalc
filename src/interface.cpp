#include "interface.hpp"
#include "basic.hpp"
#include "getuserhost.hpp"
#include <string>
#include <iostream>

std::string input;

std::string program = "LazyCalc";
int patch = 0;
int major = 0;
int minor = 1;
std::string license = "MIT";
std::string developer = "Rhasl Husein Ascardio Anugrah";

void elements::title(std::string title, std::string subtitle){
	std::cout << "  ** " << title << " **" << std::endl;
	std::cout << "   * " << subtitle << " * " << std::endl;
}

void elements::printLine(char line, int length){
	std::cout << std::string(length, line) << std::endl;
}

void elements::menus(){
	std::cout << "  A) About LazyCalc" << std::endl;
	std::cout << "  B) Basic Calculator" << std::endl;
	std::cout << " ^C) Quit" << std::endl;
}

void elements::interactive(){
        std::cout << getUsername() << "@" << getHostname() << " $ ";
        std::getline(std::cin, input);
        if(input == "B" || input == "b"){
		basic();
        } else if(input == "A" || input == "a"){
                std::cout << " " << program << " v" << major << "." << minor << "." << patch << std::endl;
		std::cout << " CLI-based calculator for UNIX-like system (from Indonesia <3)." << std::endl;
                std::cout << " Copyright (c) 2026 Rhasl Husein Ascardio Anugrah" << std::endl;
                std::cout << " License: MIT" << std::endl;
	} else if(input == "Q" || input == "q"){
		return;
        } else{
                std::cout << " " << program << ": Invalid input '" << input << "'!" << std::endl;
        }
}
