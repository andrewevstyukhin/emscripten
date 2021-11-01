
#include "../engine/Dispatcher.h"

void Dispatcher::Test() {
	class C : public Delegate {};
	[[maybe_unused]] static auto c = new C();
}
