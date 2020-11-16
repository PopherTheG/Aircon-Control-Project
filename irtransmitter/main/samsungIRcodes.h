#ifndef _SAMSUNG_IR_CODES_
#define _SAMSUNG_IR_CODES_
#include "driver/rmt.h"


const rmt_item32_t TURN_OFF_AC[] = {     
    {{{ 46292, 0, 4700, 1}}},       // 1
    {{{ 4340, 0, 740, 1}}},         // 2
    {{{ 1500, 0, 740, 1}}},         // 3
    {{{ 400, 0, 720, 1}}},          // 4
    {{{ 1520, 0, 720, 1}}},         // 5
    {{{ 1500, 0, 740, 1}}},         // 6 
    {{{ 420, 0, 700, 1}}},          // 7
    {{{ 420, 0, 700, 1}}},          // 8
    {{{ 1520, 0, 720, 1}}},         // 9
    {{{ 420, 0, 700, 1}}},          // 10
    {{{ 420, 0, 700, 1}}},          // 11
    {{{ 1540, 0, 700, 1}}},         // 12
    {{{ 420, 0, 700, 1}}},          // 13
    {{{ 400, 0, 740, 1}}},          // 14
    {{{ 1520, 0, 700, 1}}},         // 15
    {{{ 1540, 0, 720, 1}}},         // 16
    {{{ 380, 0, 720, 1}}},          // 17
    {{{ 1540, 0, 720, 1}}},         // 18
    {{{ 400, 0, 720, 1}}},          // 19
    {{{ 1520, 0, 720, 1}}},         // 20
    {{{ 1520, 0, 720, 1}}},         // 21
    {{{ 1520, 0, 720, 1}}},         // 22
    {{{ 1520, 0, 700, 1}}},         // 23
    {{{ 420, 0, 720, 1}}},          // 24
    {{{ 1540, 0, 700, 1}}},         // 25
    {{{ 1540, 0, 700, 1}}},         // 26
    {{{ 1540, 0, 700, 1}}},         // 27
    {{{ 420, 0, 700, 1}}},          // 28
    {{{ 400, 0, 720, 1}}},          // 29
    {{{ 420, 0, 700, 1}}},          // 30
    {{{ 420, 0, 720, 1}}},          // 31
    {{{ 1500, 0, 740, 1}}},         // 32
    {{{ 400, 0, 720, 1}}},          // 33
    {{{ 380, 0, 740, 1}}},          // 34
    {{{ 1520, 0, 720, 1}}},         // 35
    {{{ 1520, 0, 720, 1}}},         // 36
    {{{ 1520, 0, 720, 1}}},         // 37
    {{{ 380, 0, 740, 1}}},          // 38
    {{{ 400, 0, 720, 1}}},          // 39
    {{{ 400, 0, 720, 1}}},          // 40
    {{{ 420, 0, 680, 1}}},          // 41
    {{{ 440, 0, 700, 1}}},          // 42
    {{{ 420, 0, 700, 1}}},          // 43
    {{{ 420, 0, 700, 1}}},          // 44
    {{{ 420, 0, 720, 1}}},          // 45
    {{{ 1520, 0, 720, 1}}},         // 46    
    {{{ 1520, 0, 720, 1}}},         // 47
    {{{ 1520, 0, 700, 1}}},         // 48
    {{{ 1540, 0, 700, 1}}},         // 49
    {{{ 1540, 0, 720, 1}}},         // 50
    {{{ 5240, 0, 4700, 1}}},        // 51
    {{{ 4300, 0, 760, 1}}},         // 52
    {{{ 1480, 0, 740, 1}}},         // 53
    {{{ 400, 0, 720, 1}}},          // 54
    {{{ 1500, 0, 740, 1}}},         // 55
    {{{ 1520, 0, 720, 1}}},         // 56
    {{{ 380, 0, 740, 1}}},          // 57
    {{{ 420, 0, 700, 1}}},          // 58
    {{{ 1540, 0, 700, 1}}},         // 59
    {{{ 400, 0, 720, 1}}},          // 60
    {{{ 420, 0, 700, 1}}},          // 61
    {{{ 1540, 0, 700, 1}}},         // 62
    {{{ 420, 0, 700, 1}}},          // 63
    {{{ 420, 0, 720, 1}}},          // 64
    {{{ 1520, 0, 720, 1}}},         // 65
    {{{ 1500, 0, 720, 1}}},         // 66
    {{{ 420, 0, 720, 1}}},          // 67
    {{{ 1520, 0, 700, 1}}},         // 68
    {{{ 400, 0, 740, 1}}},          // 69
    {{{ 1540, 0, 700, 1}}},         // 70
    {{{ 1540, 0, 680, 1}}},         // 71
    {{{ 1560, 0, 700, 1}}},         // 72
    {{{ 1540, 0, 700, 1}}},         // 73
    {{{ 400, 0, 720, 1}}},          // 74
    {{{ 1540, 0, 700, 1}}},         // 75
    {{{ 1540, 0, 700, 1}}},         // 76
    {{{ 1540, 0, 700, 1}}},         // 77
    {{{ 400, 0, 720, 1}}},          // 78
    {{{ 420, 0, 700, 1}}},          // 79
    {{{ 420, 0, 700, 1}}},          // 80
    {{{ 420, 0, 700, 1}}},          // 81
    {{{ 1540, 0, 700, 1}}},         // 82
    {{{ 420, 0, 720, 1}}},          // 83
    {{{ 420, 0, 680, 1}}},          // 84
    {{{ 1540, 0, 720, 1}}},         // 85
    {{{ 1520, 0, 720, 1}}},         // 86
    {{{ 1520, 0, 700, 1}}},         // 87
    {{{ 420, 0, 720, 1}}},          // 88
    {{{ 400, 0, 720, 1}}},          // 89
    {{{ 420, 0, 680, 1}}},          // 90
    {{{ 440, 0, 700, 1}}},          // 91
    {{{ 420, 0, 680, 1}}},          // 92
    {{{ 440, 0, 700, 1}}},          // 93
    {{{ 420, 0, 700, 1}}},          // 94
    {{{ 420, 0, 720, 1}}},          // 95
    {{{ 1520, 0, 720, 1}}},         // 96
    {{{ 1500, 0, 720, 1}}},         // 97
    {{{ 1540, 0, 700, 1}}},         // 98
    {{{ 1540, 0, 700, 1}}},         // 99
    {{{ 1540, 0, 720, 1}}},         // 100  
};
#endif