
#include <string>
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>

using std::string;

class Speed
{
 private:
  std::string aspeed;

public:
  string getSpeed();
  void setSpeed(string aspeed);

  Speed();
  Speed(string aspeed);
  Json::Value dump2JSON();
  virtual bool JSON2Object(Json::Value);
};


