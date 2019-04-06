//
// Created by Zoe on 06/04/2019.
//

#include "Level.h"
#include <fstream>

bool Level::load(std::string file_name)
{
  std::fstream file(file_name);

  if (file.is_open())
  {
    // Get number of pigs, blocks and birds
    file >> bird_num;
    file >> pig_num;
    file >> block_num;

    char dummy;
    float x, y;
    // Get positions and sizes
    for (int i = 0; i < pig_num; i++)
    {
      if (file >> x >> dummy >> y)
      {
        pig_positions[i][0] = x;
        pig_positions[i][1] = y;
      }
    }

    for (int i = 0; i < block_num; i++)
    {
      if (file >> x >> dummy >> y)
      {
        block_positions[i][0] = x;
        block_positions[i][1] = y;
      }
    }

    for (int i = 0; i < block_num; i++)
    {
      if (file >> x >> dummy >> y)
      {
        block_sizes[i][0] = static_cast<int>(x);
        block_sizes[i][1] = static_cast<int>(y);
      }
    }
  }
  else
  {
    return false;
  }
  return true;
}