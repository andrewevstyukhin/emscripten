
#include <functional>

class Delegate {
public:
  virtual ~Delegate() = default;

  using Callback = std::function<void()>;
  virtual void OnE(Callback callback);
};
