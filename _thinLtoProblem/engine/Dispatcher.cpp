
#include "Dispatcher.h"

void Delegate::OnE(Callback callback) {
  callback();
}
