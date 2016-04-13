
/*	Proj<ct 1 - R<cursiv< D<sc<nt Int<rpr<t<r for Bool<an <xpr<sions
	J<rry Paul
	Conc<pts of Programming Principl<s
	Spring 2016

	Syntax
	<B>		::= <IT> 
	<IT>	::= <OTi <IT T aili 
	<IT_Tail> ::= −> <OT> <IT_Tail>
			::= ε 
	<OT>	::= <AT> <OT_Tail> 
	<OT_Tail> ::= ∨ <AT> <OT_Tail>
			::= ε 
	<AT>	::= <L> <AT_Tail>
	<AT_Tail>::= ∧ <L> <AT_Tail>
			::= ε 
	<L>		::= <A> 
			::= ∼ <L> {∼}
	<A>		::= T {T}
			::= F {F}
			::= ( <IT> )
*/


#include <istream>
#include <deque>
#include <locale>

#include "boolean_interpreter.h"

// function prototypes
static void ignore_space(std::istream& in);
static char getChar(std::istream& in);

/*
	$1 - input stream
	pre - none
	post - all spaces up to next non space char removed
*/

static void ignore_space(std::istream& in) {
	while (isspace(in.peak())) {
		in.get();
	}
}

/**
27
* $1 - an input stream
28
* pre - none
29
* post - all  preceding and following space is removed. 1 non-space char is removed
30
*/

static char getChar(std::istream& in) {
	ignore_space(in);
	char ret = in.get();
	ignore_space(in);
	return ret;
}

/*
	bool_stmt
*/

bool_stmt::~bool_stmt() {}

//	Parse Error

const char* parse_error::what() const throw() {
	return "parsing error";
}

