#pragma once
enum TokenType {COMMA, PERIOD, Q_MARK, LEFT_PAREN, RIGHT_PAREN,
	COLON, COLON_DASH, MULTIPLY, ADD, SCHEMES, FACTS, RULES, QUERIES,
	ID, STRING, COMMENT, UNDEFINED, EOF};
#include <string><iostream>
namespace std {
	class Token
	{
	private:
		int line;
		string actual;
		TokenType type;

		string typeToString(TokenType tokentype)
		{
			switch (tokentype)
			{
				case COMMA: return "COMMA"; break;
				case PERIOD: return "PERIOD"; break;
				case Q_MARK: return "Q_MARK"; break;
				case LEFT_PAREN: return "LEFT_PAREN"; break;
				case RIGHT_PAREN: return "RIGHT_PAREN"; break;
				case COLON: return "COLON"; break;
				case COLON_DASH: return "COLON_DASH"; break;
				case MULTIPLY: return "MULTIPLY"; break;
				case ADD: return "ADD"; break;
				case SCHEMES: return "SCHEMES"; break;
				case FACTS: return "FACTS"; break;
				case RULES: return "RULES"; break;
				case QUERIES: return "QUERIES"; break;
				case ID: return "ID"; break;
				case STRING: return "STRING"; break;
				case COMMENT: return "COMMENT"; break;
				case UNDEFINED: return "UNDEFINED"; break;
				case EOF: return "EOF"; break;
			}
			return "ERROR: no valid token";
		}

	public:
		Token::Token(int line, string actual, TokenType type) {
			this->line = line;
			this->actual = actual;
			this->type = type;
		}
		string Token::toString() {
			return "(" + typeToString(type) + "," + "\"" + actual + "\"" + "," + to_string(line) + ")";
		}
	};
}
