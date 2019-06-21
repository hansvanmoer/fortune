#include "Generator.hpp"

using namespace Fortune;

using namespace std;


int main(int arg_count, const char ** args){
  Generator g;

  g.bounds(0,1000, 0, 1000);

  g.add_site(10, 10);
  g.add_site(500, 500);
  g.add_site(20, 50);
  g.add_site(900, 900);
  
  g.print();
  
  return 0;
}

