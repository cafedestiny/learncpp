#include <iostream> 
using namespace std;

auto say_my_age = [](){
    std::cout << "You are " << 13 << " years old!" << std::endl;
};
 
int main(){
 
    say_my_age();
    return 0;
}
/*
int main()
{
	
		Lambda function signature :
		[capture list] (parameters) ->return type{
			//function body
		}
	auto func = [](){
		std::cout << "Hello World!" << std::endl; 
	};
	func();
	std::cout << "Done!" << std::endl;
	return 0;

	
}
*/
