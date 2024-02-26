﻿/**
 * @date        23-12-2023
 * @brief       Casuall template of Boost
 *              c++ client which server is
 *              the boost async tcp c++
 *              server 
 * @author      Ramil
 * @copyright   (C) 2023 by not commercial
 */

#include <iostream>
#include "Client.h"

int
main()
{
  if (g_Net.connectToServer("127.0.0.1", "228"))
  {
    g_Net.Identify("kassa_po");
  }
  else
  {
    std::cout << "Server connection error" << std::endl;
  }

  return (0);
}
