#include <iostream>
#include "token.hpp"

TokenType Token::LookIdent(std::string ident)
{
    
    /*if(Token::keywords.find(ident) != Token::keywords.end()){
        return Token::keywords[ident];
    };*/

    return Token::IDENT;
};