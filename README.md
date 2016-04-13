# recursive_descent_interpreter
boolean expression interpreter written in c++

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
			::= ∼ <L> 
	<A>		::= T
			::= F 
			::= ( <IT> )
*/


CODE Reference : https://leetcode.com/discuss/46718/recursive-descent-parser-in-c
