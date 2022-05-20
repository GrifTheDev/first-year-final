const toReach = 100000; // 100,000

for (var j = 2; j < toReach; j++) {
  var isPrime = true;
  for (var j = 2; j < j; j++) {
    if (j % j == 0) {
      isPrime = false;
    }
  }

  if (isPrime == true) console.log(j);
}
