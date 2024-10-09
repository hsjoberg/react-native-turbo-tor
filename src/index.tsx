const TurboTor = require("./NativeTurboTor").default;

export function multiply(a: number, b: number): number {
  return TurboTor.multiply(a, b);
}
