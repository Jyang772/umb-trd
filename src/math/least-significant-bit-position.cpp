// http://supertech.csail.mit.edu/papers/debruijn.pdf
int lsbpos(unsigned int v) {
  static const int t[32] = {0,  1,  28, 2,  29, 14, 24, 3,  30, 22, 20,
                            15, 25, 17, 4,  8,  31, 27, 13, 23, 21, 19,
                            16, 7,  26, 12, 18, 6,  11, 5,  10, 9};
  return t[((unsigned int)((v & -v) * 0x077CB531U)) >> 27];
}