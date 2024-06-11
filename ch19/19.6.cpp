

// objects of type Token have a single member, which could be of any of the listed types
union Token {
    // members are public by default
    char   cval;
    int    ival;
    double dval;
};



void _19_6() {

    Token first_token = { 'a' }; // initializes the cval member
    Token last_token;          // uninitialized Token object
    Token* pt = new Token;     // pointer to an uninitialized Token object

}