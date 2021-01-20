#include <iostream>
#include "lexer.hpp"
#include "../token/token.hpp"

using namespace lexer;

Lexer lexer::New(std::string input)
{
    Lexer lex;
    lex.input = input;
    HandlerFuncs::readChar(lex);
    return lex;
};

// HandlerFuncs
void HandlerFuncs::readChar(Lexer& l)
{
    if (l.readPosition >= l.input.length())
    {
        l.ch = 0;
    }
    else
    {
        l.ch = l.input[l.readPosition];
    };

    l.position = l.readPosition;
    l.readPosition += 1;
};

Token::token lexer::NextToken(Lexer& l)
{
    Token::token tok;
    switch (l.ch) {
        case '=':
            std::string literal = "=";
            
            tok.Literal = literal;
            tok.Type = Token::ASSIGN;
            break;
    }
    return tok;
};

