#include <ctime>
#include <libaco/util.h>

unsigned int Util::random_number(unsigned int range) {
  if(!seed_flag) {
    srand(time(0));
  }
  return (rand() % range);
}
