#include "Vertex.hpp"

using namespace Fortune;

using namespace std;

ostream & Fortune::operator<<(ostream & output, const Vertex & v){
  return output << '(' << v.x << ',' << v.y << ')';
}
