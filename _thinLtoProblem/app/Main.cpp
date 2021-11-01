
#include "../engine/Dispatcher.h"

int main()
{
	Dispatcher::Instance().OnE(
		[](Dispatcher::Delegate::Result)
		{
			std::printf("1");
		}
	);

	Dispatcher::Test();
	return 0;
}
