#include "Parabola.hpp"

using namespace Fortune;

using namespace std;

void Parabola::update(double scan_line_y){
  if(scan_line_y == site_->y){
    //degenerate case
    a_ = 0;
    b_ = 0;
    c_ = 0;
  }
  /*
    Given vertex S: (sx, sy) and line L: y = ly
    For each point P (x,y) on parabola P the following holds:

    dist(site, P)² = dist(site, L)² <=>
    (sx - x)² + (sy - y)² = (ly - y)² <=>
    sx² + x² - 2 sx x + y² - 2 sy y - y² - ly² + 2 ly y = 0 <=>
     + 2 (ly - sy) y = x² + 2 sx x  + ly² - sx² = 0 <=>
     let a = 1 / (2 (ly - sy) ):
     y = a x + 2 a sx x + a (ly² - sx²) 
  */
  a_ = 1 / (2 * (scan_line_y - site_->y));
  b_ = 2 * a_ * site_->x;
  c_ = a_ * (scan_line_y * scan_line_y - site_->x * site_->x);
}

bool Parabola::is_degenerate() const{
  return a_ == 0;
}
