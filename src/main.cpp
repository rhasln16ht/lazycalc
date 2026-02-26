#include "interface.hpp"

int main(){
	elements ui;

	ui.title("LAZYCALC  CALCULATOR", "CLI-based Calculator");
	ui.printLine('-', 30);
	ui.menus();
	ui.printLine('-', 30);
	while(true){
		ui.interactive();
	}
	return 0;
}
