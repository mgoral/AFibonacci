#include <string>

class Alphabeth {
    private:
        std::string LETTERS; 
        std::string result;
        int l_length;
        char NEUTRAL;
    
    public:
        Alphabeth() : 
            l_length( LETTERS.length() ),
            LETTERS( "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" ),   /* 52 letters with neutral: base 52 */
            NEUTRAL( LETTERS.at(0) ),
            result( "" )
            { }
        std::string add( std::string left, std::string right);
        std::string getResult();
};
    
