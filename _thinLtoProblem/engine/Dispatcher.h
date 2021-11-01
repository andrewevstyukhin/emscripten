
#include <cstdio>
#include <functional>

namespace Namespace {
	class Delegate {
	public:
		virtual ~Delegate() = default;

		enum class Result { NoData };
		using Callback = std::function<void(Result)>;
		virtual void OnE(Callback callback);
	};
}

namespace Dispatcher {
	using Delegate = Namespace::Delegate;
	Delegate& Instance();
	void Test();
}
