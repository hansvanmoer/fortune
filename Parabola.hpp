#ifndef PARABOLA_HPP
#define PARABOLA_HPP

#include "Vertex.hpp"

#include <iostream>

namespace Fortune{

  class Parabola{
  public:

    Parabola(Vertex * site) : site_{site}{};

    Vertex * site() const{ return site_; };

    double a() const{ return a_; };

    double b() const{ return b_; };

    double c() const{ return c_; };

    void update(double scan_line_y);

    bool is_degenerate() const;
    
  private:

    Vertex * site_;
    
    double a_;
    double b_;
    double c_;
  };
  
  std::ostream & operator<<(std::ostream & output, const Parabola & p);
}

#endif
