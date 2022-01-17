function makeCounter() {
    let count = 0
    return () => {
      console.log(++count);
    }
  }
  
  const myCounter = makeCounter();
  myCounter();
  myCounter.call();