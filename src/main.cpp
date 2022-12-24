#include <iostream>
#include <string>
#include <fstream>



// Messing with fstream
int main(int args, char** argv){
	

	int v_args = args;
	char** c_argv = argv;
	
	
	std::string db_name = argv[1];

	std::ofstream b_database;
	b_database.open(db_name + (std::string)".txt");
	std::string options;

	std::cout << "Some things you can do:" << std::endl;

	
	std::cout << "-C : Create row.";	
	
	std::cout << std::endl << std::endl;
	std::cout << "-R : Read row.";

	std::cout << std::endl << std::endl;
	std::cout << "-U : Update row.";
	
	std::cout << std::endl << std::endl;
	std::cout << "-D : Delete row.";
	
	std::cout << std::endl << std::endl;

	std::cin >> options;
	int amnt = 0;
	for(auto a:options){
		amnt++;
	}


	if(options == "-C"){
		std::string name;
		std::cout << "Choose a name: " << std::endl;
		std::cin >> name;
		b_database << "Name:" << name << ";";
	}

	b_database.close();

	return 0;
}

