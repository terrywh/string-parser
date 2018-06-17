#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "concepts.hpp"

int main(int argc, char* argv[]) {
	std::cout << "value_type<std::string> = " << parser::concepts::value_type<std::string>::value << std::endl;
	std::cout << "value_type<std::vector<char>> = " << parser::concepts::value_type<std::vector<char>>::value << std::endl;
	std::cout << "value_type<int> = " << parser::concepts::value_type<int>::value << std::endl;
	
	std::cout << "container_type_1<std::vector<std::string>> = " << parser::concepts::container_type_1<std::vector<std::string>, std::string>::value << std::endl;
	std::cout << "container_type_2<std::vector<std::string>> = " << parser::concepts::container_type_2<std::vector<std::string>, std::string>::value << std::endl;

	std::cout << "container_type_1<std::multimap<std::string, std::string>> = " << parser::concepts::container_type_1<std::multimap<std::string, std::string>, std::pair<std::string, std::string>>::value << std::endl;
	std::cout << "container_type_2<std::multimap<std::string, std::string>> = " << parser::concepts::container_type_2<std::multimap<std::string, std::string>, std::pair<std::string, std::string>>::value << std::endl;
	return 0;
}