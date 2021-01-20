#include "lexer/lexer.hpp"
#include "token/token.hpp"
#include <iostream>

int main()
{
    std::string input = "=";

    lexer::Lexer program = lexer::New(input); 
    Token::token tokenAssign = lexer::NextToken(program);
    std::cout << tokenAssign.Type << std::endl;
};