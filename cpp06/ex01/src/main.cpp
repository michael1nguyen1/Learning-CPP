#include "Serializer.hpp"
#include <iostream>

//learned reinterpret_cast
int main(void){
	Data squidData = {2, "Bob"};
	Data *squidDataPtr = &squidData;
	uintptr_t squidInt = Serializer::serialize(squidDataPtr);
	Data *deserializedSquidDataPtr = Serializer::deserialize(squidInt);

	if (squidDataPtr == deserializedSquidDataPtr){
		std::cout
			<< "They are the same and here is proof: \n";
		std::cout
			<< "Squid:" + deserializedSquidDataPtr->name
			<< " ID:" + std::to_string(deserializedSquidDataPtr->squidID)
			<< std::endl;
	}
	else
		std::cout << "Crap" << std::endl;
}