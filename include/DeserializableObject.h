#ifndef _DeserializableObject_h_
#define _DeserializableObject_h_

#include <Arduino.h>
#include <ArduinoJson.h>

class DeserializableObject
{
public:
  virtual bool parse(JsonDocument &doc) = 0;
};

#endif