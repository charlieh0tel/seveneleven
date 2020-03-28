function solve() {
  for (a = 1; a < 711; ++a) {
    for (b = 1; b < 711; ++b) {
      for (c = 1; c < 711; ++c) {
        for (d = 1; d < 711; ++d) {
          if ((a * b * c * d == 711 * 100 * 100 * 100) &&
              (a + b + c + d == 711)) {
              return {a, b, c, d}
          }
        }
      }
    }
  }        
}
