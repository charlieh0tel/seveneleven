function solve() {
  for (a = 1; a < 711; ++a) {
    for (b = a; b < 711; ++b) {
      for (c = b; c < 711; ++c) {
        for (d = c; d < 711; ++d) {
          if ((a * b * c * d == 711 * 100 * 100 * 100) &&
              (a + b + c + d == 711)) {
              return {a, b, c, d}
          }
        }
      }
    }
  }        
}
