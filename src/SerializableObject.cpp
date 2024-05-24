#include "SerializableObject.h"

std::string SerializableObject::toString(bool pretty)
{
  JsonDocument doc;
  std::string str;
  toJson(doc);
  if (pretty)
  {
    serializeJsonPretty(doc, str);
  }
  else
  {
    serializeJson(doc, str);
  }
  return str;
}