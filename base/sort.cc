#include <vector>
#include <iostream>
#include <algorithm>

struct Station {
  
  Station(): cost(0) {}
  
  Station(const std::string& id_,
      double cost_):
    id(id_),
    cost(cost_) {}

  std::string id;
  double cost;
};

bool Comp(const Station& s1, const Station& s2) {
  return s1.cost < s2.cost;
}

int main(int argc, char* argv[]) {
  std::vector<Station> station_list;
  station_list.push_back(Station("1", 10.0));
  station_list.push_back(Station("2", 4.0));
  station_list.push_back(Station("3", 1.0));
  std::sort(station_list.begin(), station_list.end(), Comp);
  for (auto it = station_list.begin(); it != station_list.end(); ++it) {
    std::cout << it->id << std::endl;
  }
  return 0;
}
