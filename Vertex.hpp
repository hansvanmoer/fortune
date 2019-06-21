#ifndef VERTEX_HPP
#define VERTEX_HPP

#include <iostream>

namespace Fortune{

  class Vertex{
  public:

    double x;
    double y;

    Vertex(double x_, double y_) : x{x_}, y{y_}{};
  };

  std::ostream & operator<<(std::ostream & output, const Vertex & v);
  
}

#endif
