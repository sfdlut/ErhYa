#ifndef __ERHYA_SRC_SERVICE_HPP__
#define __ERHYA_SRC_SERVICE_HPP__

#include <vector>
#include <string>

namespace erhya {

typedef std::vector<std::string> ResultFormatSeq;

class ServiceI : public Service 
{
public:
  
  virtual ResultFormatSeq get(const int id_business, const int id_query, MetaData& meta);
  bool init();
private:
  map<int, CachePtr> caches_;
};

} // end namespace erhya

#endif  // __ERHYA_SRC_SERVICE_HPP__
