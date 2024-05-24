#ifndef _SerializableObject_h_
#define _SerializableObject_h_

#include <Arduino.h>
#include <ArduinoJson.h>

class SerializableObject
{
public:
  virtual bool toJson(JsonDocument &dest) = 0;
  virtual std::string toString(bool pretty = true);
};

#endif