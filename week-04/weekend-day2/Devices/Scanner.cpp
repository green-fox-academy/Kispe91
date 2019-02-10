#include "Scanner.h"

Scanner::Scanner(int speed)
{
    _speed = speed;
}

std::string Scanner::scan()
{
  return "I'm scanning a document " + std::to_string(_speed) + " ppm";
}