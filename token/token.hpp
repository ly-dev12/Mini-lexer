#include <iostream>
#include <map>
#include <string>

#ifndef TOKEN_H
    #define TOKEN_H
    typedef std::string TokenType;
    
    namespace Token {
        const std::string INT = "INT";
        const std::string ASSIGN = "=";
        const std::string PLUS = "+";
        const std::string COMMA = ",";
        const std::string TRUE = "true";
        const std::string IDENT = "ident";
        
        //std::map<std::string, TokenType> keywords;
        //keywords["true"] = TRUE;

        struct token {
            TokenType Type;
            std::string Literal;
        };

        TokenType LookIdent(std::string ident);
    }
#endif