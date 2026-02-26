#include "interface.hpp"
#include "basic.hpp"
#include <iostream>

float a, b;
char op;

void basic(){
	while(true){
		std::cout << " >> ";
        	std::cin >> a;
        	std::cout << " " << a << " >> ";
        	std::cin >> op;
        	std::cout << " " << a << " " << op << " >> ";
        	std::cin >> b;

		if(op == '+'){
                	std::cout << "  " << a << " " << op << " " << b << " = " << a+b << std::endl;
        	} else if(op == '-'){
                	std::cout << "  " << a << " " << op << " " << b << " = " << a-b << std::endl;
        	} else if(op == '*'){
                	std::cout << "  " << a << " " << op << " " << b << " = " << a*b << std::endl;
        	} else if(op == '/'){
                	std::cout << "  " << a << " " << op << " " << b << " = " << a/b << std::endl;
        	} else if(op == 'q'){
                	break;
        	} else{
                	std::cout << "  " << program << ": Invalid operator symbol '" << op << "'!" << std::endl;
        	}
	}
}
