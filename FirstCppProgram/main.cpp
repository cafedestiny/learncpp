#include <iostream>
#include <string>
using namespace std;
class Int {
	int x;

public:
	Int(int x_in = 0)
		: x{ x_in }
	{
		cout << "Conversion Ctor called " << x << endl;
	}
	operator string() //operator overloading
	{
		cout << "Conversion Operator " << x << endl;
		return to_string(x);
	}
};
int main()
{
	Int obj(3);
	string str = obj;
	obj = 20;
	string str2 = static_cast<string>(obj);
	static_cast<Int>(30);

    char c = 66;
    cout<< static_cast<int>(c) <<endl;

    auto var {333u};
    var = -22;
    std::cout << "var: " << var << endl;

    string place;
    std::cout << "Where do you live?"<< std::endl;
    std::cin  >> place;
    std::cout <<"I've heard great things about "<<place<<". I'd like to go sometime."<<std::endl;

	return 0;
}
