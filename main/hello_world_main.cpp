/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <iostream>
#include "new_file.hpp"

extern "C" void app_main()
{
    
    printf("Hello World \n\n");
    printf("External function - ");
    printf("%i", function_test());
    printf("\n\n");
    printf("External cpp file function called from a hpp file - ");
    printf("%i",test_function2());
    printf("\n");
    return;
}
