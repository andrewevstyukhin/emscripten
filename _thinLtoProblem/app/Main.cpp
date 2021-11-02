
#include "../engine/Dispatcher.h"

int main()
{
	class C : public Delegate {};
	[[maybe_unused]] static auto c = new C();

	return 0;
}
