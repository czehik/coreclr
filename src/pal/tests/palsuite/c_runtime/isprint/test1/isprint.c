//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information. 
//

/*=============================================================
**
** Source: isprint.c
**
** Purpose: Positive test the isprint API.
**          Call isprint to test if a character is printable 
**
**
**============================================================*/
#include <palsuite.h>

int __cdecl main(int argc, char *argv[])
{
    int err;
    int index;

    /*Initialize the PAL environment*/
    err = PAL_Initialize(argc, argv);
    if(0 != err)
    {
        return FAIL;
    }

    /*check if the character is printable*/
    for(index = 0x20; index<=0x7E;index++)
    {
        err = isprint(index);
        if(0 == err)
        {
            Fail("\nFailed to call isprint API to check "
                "printable character from 0x20 to 0x7E!\n");
        }
    }


    PAL_Terminate();
    return PASS;
}
