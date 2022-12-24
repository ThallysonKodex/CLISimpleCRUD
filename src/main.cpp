#include <iostream>
#include <string>
#include <fstream>



// Messing with fstream
int main(int args, char** argv){

	int v_args = args;
	char** c_argv = argv;
	
	std::string db_name = argv[1];
	std::ifstream db_read(db_name + (std::string)".txt");
	std::ofstream b_database;
	if(db_read.fail()){
		
		b_database.open(db_name + (std::string)".txt");
		//std::ofstream b_database(db_name + (std::string)".txt");




	}

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
	int amnt {0};
	for(auto a:options){
		amnt++;
	}

	if(amnt < 3 && options[0] == '-'){
		if(options[1] == 'C'){
			std::cout << "Usage: " << "-C [name] [age] [id]" << std::endl;
		}
	} else if(amnt > 3 && options[0] == '-'){
		if(options[1] == 'C'){
			std::cout << options.substr(3, amnt) << std::endl;
		}
	}

				

	
	b_database.close();
	db_read.close();

	//if((std::string)argv[1] == (std::string)"hello"){
	
		//std::cout << "World!" << std::endl;
	
	//}

	

	return 0;
}

