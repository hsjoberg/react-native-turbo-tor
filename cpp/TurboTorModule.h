#pragma once

// Apple
#if __has_include(<React-Codegen/RNTurboTorSpecJSI.h>)
#include <React-Codegen/RNTurboTorSpecJSI.h>
// Android
#elif __has_include("RNTurboTorSpecJSI.h")
#include "RNTurboTorSpecJSI.h"
#endif

#include <memory>
#include <string>

#include <react/bridging/Promise.h>

namespace facebook::react {

class TurboTorModule : public NativeTurboTorCxxSpec<TurboTorModule> {
 public:
  explicit TurboTorModule(std::shared_ptr<CallInvoker> jsInvoker);

  double multiply(jsi::Runtime &rt, double a, double b);


};

} // namespace facebook::react
