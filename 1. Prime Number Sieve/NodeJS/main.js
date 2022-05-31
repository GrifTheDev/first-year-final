const toReach = 100000; // 100,000

for (var i = 2; i < toReach; i++) {
  var isPrime = true;
  for (var j = 2; j < i; j++) {
    if (i % j == 0) {
      isPrime = false;
    }
  }

  if (isPrime == true) console.log(j);
}
