import React from "react";
import { StyleSheet, View, Text } from "react-native";
// import * as RNFS from '@dr.pogodin/react-native-fs';

import NativeTurboTor from "../../src/NativeTurboTor";

export default function App(): React.FunctionComponentElement<{}> {
  return (
    <View style={styles.container}>
      <Text>Hej</Text>
      <Text>{NativeTurboTor.multiply(1, 10)}</Text>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: "center",
    justifyContent: "center",
  },
});
