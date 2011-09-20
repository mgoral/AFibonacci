#ifndef ALPHABETH_HPP_GUARD
#define ALPHABETH_HPP_GUARD

#include <string>

class Alphabeth {
    private:
        std::string LETTERS; 
        std::string result;
        int l_length;
        char NEUTRAL;
    
    public:
        Alphabeth(std::string res = "") : 
            l_length( LETTERS.length() ),
            LETTERS( "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" ),   /* 52 letters with neutral: base 52 */
            NEUTRAL( LETTERS.at(0) ),
            result( res )
            { }
        std::string add(std::string left,  std::string right);
        std:: string add(std::string left);
        Alphabeth& setResult(std::string res);
        std::string getResult();

        /* Operator overloads */
        std::string operator+(const std::string right);
        Alphabeth operator+( Alphabeth& right);
        std::string operator=(const std::string right);
        Alphabeth& operator=(const Alphabeth& right);
};

#endif
