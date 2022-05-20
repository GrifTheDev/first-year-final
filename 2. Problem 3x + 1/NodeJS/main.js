var targetNumber = 5000;
for (var i = 10; i < targetNumber + 1; i++) {
  console.log("========== " + i + " ==========");
  var j = i;
  while (j > 2) {
    if (j % 2 == 0) {
      j /= 2;
      console.log(j);
    } else {
      j = 3 * j + 1;
      console.log(j);
    }
  }

  console.log(j / 2);
}
