
#include "Dispatcher.h"

void Namespace::Delegate::OnE(Callback callback) {
	callback(Result::NoData);
}

Namespace::Delegate& Dispatcher::Instance() {
	class D : public Namespace::Delegate {
	public:
		void OnE(Callback callback) override {
			std::printf("0");
		}
	};

	static Namespace::Delegate* instance = new D();
	return *instance;
}
