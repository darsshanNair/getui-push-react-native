import React from 'react';
import { StyleSheet, Text, View } from 'react-native';
import Getui from 'react-native-getui';

export default class App extends React.Component {

  componentDidMount(){
    Getui.clientId((param) =>{
      console.log("GETUI Push Token: " + param);
    });
  }

  render() {
    return (
      <View style={styles.container}>
        <Text>GETUI Push Testing App</Text>
      </View>
    );
  }
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },
});
