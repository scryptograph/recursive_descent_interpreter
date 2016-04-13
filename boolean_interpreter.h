#ifndef PARSER_H_INCLUDED
#define PARSER_H_INCLUDED

#include <istream>
#include <deque>
#include <exception>

class bool_stmt;
class imply_term;
class or_term;
class and_term;
class imply_tail;
class or_tail;
class and_tail;
class literal;
class atom;


// Define Base Class
class bool_stmt {

public:
	virtual ~bool_stmt();
	virtual double get_value() = 0;
};

class parse_error : public std::exception {
	const char* what() const throw();
};

