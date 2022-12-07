#include <string>
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include "Speed.h"
using std::string;

string Speed::getSpeed()
{
  return aspeed;
};

void Speed::setSpeed(string aspeed)
{
  this->aspeed = aspeed;
};

Speed::Speed() {}
Speed::Speed(string aspeed) 
{
  setSpeed(aspeed);
}

Json::Value Speed::dump2JSON() {
  Json::Value result;
  if (this->aspeed != "") {
    result["speed"] = this->aspeed;
  }
  return result;
};

bool
Speed::JSON2Object
(Json::Value input)
{
  bool result = true;

  if ((input.isNull() == true) ||
      (input.isObject() != true))
    {
      return false;
    }
  if ((input["speed"]).isString() == true) {
    this->aspeed = (input["speed"]).asString();
  }

  return true;

}
