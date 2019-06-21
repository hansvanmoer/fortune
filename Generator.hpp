#ifndef GENERATOR_HPP
#define GENERATOR_HPP

#include "Vertex.hpp"

#include <vector>

namespace Fortune{

  class Generator{
  public:

    Generator() = default;
    
    void bounds(double min_x, double max_x, double min_y, double max_y);
    
    void add_site(double x, double y);

    void print();
    
    ~Generator();
    
  private:

    std::vector<Vertex *> vertices_;
    std::vector<Vertex *> sites_;

    double min_x_;
    double max_x_;
    double min_y_;
    double max_y_;
    
    Generator(const Generator &) = delete;
    Generator & operator=(const Generator &) = delete;
  };
  
}

#endif
