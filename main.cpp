#include <iostream>
#include<fstream>
#include<vector>
#include<string>
#include "Lexer.h"
#include "Token.h"
using namespace std;
int main(int argc, char* argv[]) {
	string fileName = argv[1];
	ifstream input(fileName);
	cout<< input.rdbuf();
	//Lexer process = new Lexer();
	//process.Run(input);
}