/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <iostream>
#include "new_file.hpp"

extern "C" void app_main()
{
    std::cout<<std::endl;
    std::cout<<"Hello World \n"<<"External function - "<<function_test()<<
    std::endl<<"External cpp file function called from a hpp file - \n"<<test_function2()<<std::endl;

    return;
}
