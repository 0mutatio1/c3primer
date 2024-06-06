void _4_12() {
	    // Associativity	Operator	Function	Use	See page
		// Left::Global scope::name	286
		// Left::Class scope	class::name	88
		// Left::Class scope	class::name	88
		// Left::Namespace scope	namespace::name	82
		// Left.Member selectors	object.member	23
		// Left->Member selectors	pointer->member	110
		// Left[]	Subscript	expr[expr]	116
		// Left()	Function call	name(expr_list)	23
		// Left()	Type construction	type(expr_list)	164
		// Right	++	Postfix increment	lvalue++	147
		// Right	--	Postfix decrement	lvalue--	147
		// Right	typeid	Type ID	typeid(type)826
		// Right	typeid	Run - time type ID	typeid(expr)826
		// Right	cast_name	Type conversion	cast_name<type>(expr)	162
		// Right	++	Prefix increment	++lvalue	147
		// Right	--	Prefix decrement	--lvalue	147
		// Right	~Bitwise NOT	~expr	152
		// Right	!Logical NOT	!expr	141
		// Right - Unary minus - expr	140
		// Right + Unary plus + expr	140
		// Right * Dereference * expr	53
		// Right & Address - of & expr	52
		// Right()	Type conversion(type) expr	164
		// Right	sizeof	Size of object	sizeof expr	156
		// Right	sizeof	Size of type	sizeof(type)	156
		// Right	sizeof...	Size of parameter pack	sizeof...(name)	700
		// Right	new	Allocate object	new type	458
		// Right	new[]	Allocate array	new type[size]	458
		// Right	delete	Deallocate object	delete expr	460
		// Right	delete[]	Deallocate array	delete[] expr	460
		// Right	noexcept	Can expr throw	noexcept(expr)780
		// Left->*Pointer to member select	ptr->*ptr_to_member	837
		// Left.*Pointer to member select	obj.*ptr_to_member	837
		// Left * Multiply	expr * expr	139
		// Left / Divide	expr / expr	139
		// Left % Modulo(remainder)	expr % expr	139
		// Left + Add	expr + expr	139
		// Left - Subtract	expr - expr	139
		// Left << Bitwise shift left	expr << expr	152
		// Left >> Bitwise shift right	expr >> expr	152
		// Left	<	Less than	expr < expr	141
		// Left <= Less than or equal	expr <= expr	141
		// Left	>	Greater than	expr > expr	141
		// Left >= Greater than or equal	expr >= expr	141
		// Left == Equality	expr == expr	141
		// Left != Inequality	expr != expr	141
		// Left & Bitwise AND	expr & expr	152
		// Left ^ Bitwise XOR	expr ^ expr	152
		// Left | Bitwise OR	expr | expr	152
		// Left && Logical AND	expr && expr	141
		// Left || Logical OR	expr || expr	141
		// Right ? : Conditional	expr ? expr : expr	151
		// Right = Assignment	lvalue = expr	144
		// Right *= / -%= Compound assignment	lvalue *= expr lvalue /= expr lvalue %= expr	144
		// Right += -= Compound assignment	lvalue += expr lvalue -= expr	144
		// Right <<= >>= Compound assignment	lvalue <<= expr lvalue >>= expr	144
		// Right &= |= ^= Compound assignment	lvalue &= expr lvalue |= expr lvalue ^= expr	144
		// Right	throw	Throw exception	throw expr	193
		// Left, Comma	expr, expr	157
}