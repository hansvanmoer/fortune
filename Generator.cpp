#include "Generator.hpp"

using namespace Fortune;

using namespace std;

void Generator::bounds(double min_x, double max_x, double min_y, double max_y){
  if(min_x > max_x){
    min_x_ = max_x;
    max_x_ = min_x;
  }else{
    min_x_ = min_x;
    max_x_ = max_x;
  }
  if(min_y > max_y){
    min_y_ = max_y;
    max_y_ = min_y;
  }else{
    min_y_ = min_y;
    max_y_ = max_y;
  }
}

void Generator::add_site(double x, double y){
  Vertex * v = new Vertex{x, y};
  vertices_.push_back(v);
  sites_.push_back(v);
}

void Generator::print(){
  cout << "bounds: x in {" << min_x_ << ',' << max_x_ << "}, y in {" << min_y_ << ',' << max_y_ << "}\n";
  cout << "sites:\n";
  for(auto s : sites_){
    cout << *s << '\n';
  }
  cout << '\n';
}

Generator::~Generator(){
  for(auto v : vertices_){
    delete v;
  }
}
