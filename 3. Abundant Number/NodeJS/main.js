for (var i = 1; i < 100000 + 1; i++) {
  var zbrojDjelitelja = 0;
  for (var j = 1; j < i; j++) {
    if (i % j == 0) {
      zbrojDjelitelja += j;
    }
  }
  if (i < zbrojDjelitelja) {
    console.log(i);
  }
}
