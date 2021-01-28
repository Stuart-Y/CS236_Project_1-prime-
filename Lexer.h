#pragma once
#include <vector><iostream><fstream><string>
#include "Token.h"
#include "Automaton.h"
namespace std {
	class Lexer
	{
	private:
		std::vector<Token*> tokens;
		std::vector<Automaton*> automata;

	public:
		Lexer::Lexer() {
			vector<Token*> tokens;
			vector<Automaton*> automata;
		}
		void Lexer::Run(string input) {
			int lineCount = 1;
			int maxRead = 1;
			int machineCount = 0;
			Automaton maxMachine = automata[1];
			

			while (machineCount<automata.size()) {

			}
		}
	};
}

