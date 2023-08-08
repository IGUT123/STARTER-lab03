#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"



int main() {

  struct Box b1;

  initBox(&b1,3.14159,6.2831853071,3.56434,6.4354323454);
  assertEquals("[ul=(3,6), w=4,h=6]", boxToString(b1,1), "boxToString(b1,1)");
  assertEquals("[ul=(3.1,6.3), w=3.6,h=6.4]", boxToString(b1,2), "boxToString(b1,2)");
  assertEquals("[ul=(3.14,6.28), w=3.56,h=6.44]", boxToString(b1,3), "boxToString(b1,3)");
  assertEquals("[ul=(3.142,6.283), w=3.564,h=6.435]", boxToString(b1,4), "boxToString(b1,4)");
  assertEquals("[ul=(3.1416,6.2832), w=3.5643,h=6.4354]", boxToString(b1,5), "boxToString(b1,5)");
  assertEquals("[ul=(3.14159,6.28319), w=3.56434,h=6.43543]", boxToString(b1,6), "boxToString(b1,6)");



  return 0;
}
// SAMPLE FORMAT: [ul=(3.4,-5), w=5,h=7] 