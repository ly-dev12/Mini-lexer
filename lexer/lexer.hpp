#include <iostream>
#include "../token/token.hpp"

#ifndef LEXER_H
    #define LEXER_H
    typedef char byte;

    namespace lexer {
        struct Lexer {
            std::string input;
            int position;
            int readPosition;
            byte ch;
        };

        Lexer New(std::string input);

        Token::token NextToken(Lexer& l);

    };

    namespace lexer::HandlerFuncs {
        void readChar(Lexer& l);
    };

#endif