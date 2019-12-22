#pragma once
#include <string>

namespace numeralSystem
{
	namespace positional
	{
		namespace standard
		{
			int sum(int const number1, int const number2, int const base);

			std::string sum(std::string const number1, std::string const number2, int const base);

			int min(int const number1, int const number2, int const base);

			int mult(int const number1, int const number2, int const base);
		}
		// end of namespace standard
		
		namespace nonStandard
		{

		}
		// end of namespace nonStandard
	}
	// end of namespace positional
	
	namespace nonPositional
	{
		namespace factorial
		{
			std::string sum(std::string const number1, std::string const number2);
		}
	}
	// end of namespace nonPositional

	namespace mixed
	{

	}
	// end of namespace mixed
}
// end of namespace numeralSystem