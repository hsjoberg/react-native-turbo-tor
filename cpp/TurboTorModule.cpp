#include "TurboTorModule.h"

namespace facebook::react {

TurboTorModule::TurboTorModule(std::shared_ptr<CallInvoker> jsInvoker)
    : NativeTurboTorCxxSpec(std::move(jsInvoker)) {}


double TurboTorModule::multiply(jsi::Runtime &rt, double a, double b) {
    return a * b;
}


} // namespace facebook::react
