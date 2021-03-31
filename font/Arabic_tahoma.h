

/*
 *
 * Arabic_tahoma
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Arabic_tahoma.h
 * Date                : 07.07.2016
 * Font size in bytes  : 14278
 * Font width          : 10
 * Font height         : 16
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef ARABIC_TAHOMA_H
#define ARABIC_TAHOMA_H

#define ARABIC_TAHOMA_WIDTH 10
#define ARABIC_TAHOMA_HEIGHT 16

const uint8_t Arabic_tahoma[] PROGMEM = {
    0x37, 0xC6, // size
    0x0A, // width
    0x10, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x03, 0x0B, 0x11, 0x13, 0x0C, 0x0B, 0x0C, 0x02, 0x05, 0x05, 
    0x0C, 0x10, 0x04, 0x03, 0x04, 0x09, 0x05, 0x06, 0x09, 0x0B, 
    0x0A, 0x0A, 0x09, 0x0A, 0x0A, 0x09, 0x06, 0x0B, 0x0A, 0x09, 
    0x0A, 0x07, 0x10, 0x06, 0x09, 0x0D, 0x07, 0x0C, 0x0A, 0x0A, 
    0x09, 0x0D, 0x0D, 0x0A, 0x07, 0x0D, 0x0C, 0x08, 0x09, 0x09, 
    0x08, 0x0B, 0x08, 0x0B, 0x08, 0x0B, 0x09, 0x0D, 0x09, 0x05, 
    0x07, 0x05, 0x0A, 0x0A, 0x03, 0x03, 0x08, 0x0C, 0x09, 0x0A, 
    0x0C, 0x0C, 0x0B, 0x0D, 0x0D, 0x0B, 0x05, 0x08, 0x08, 0x09, 
    0x09, 0x09, 0x08, 0x0A, 0x09, 0x0A, 0x07, 0x0D, 0x09, 0x08, 
    0x09, 0x09, 0x02, 0x09, 0x08, 0x0C, 
    
    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 32
    0x00, 0x80, 0x80, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x80, 0x80, 0x00, 0x07, 0x0F, 0x18, 0x30, 0x30, 0x30, 0x30, 0x18, 0x0F, 0x07, // 33
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x80, 0xC0, 0x60, 0x60, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x0F, 0x1F, 0x38, 0x30, 0x30, 0x38, 0x1C, 0x0F, 0x07, 0x06, 0x0F, 0x07, 0x06, 0x06, 0x06, 0x07, 0x03, 0x00, // 35
    0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x07, 0x0F, 0x0C, 0x0C, 0x6C, 0x6C, 0x0C, 0x0C, 0x0F, 0x07, 0x00, // 36
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x7F, 0x7F, 0x03, 0x03, 0x07, 0x0F, 0x0C, 0x0C, 0x0F, 0x07, // 37
    0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, 0x07, 0x0F, 0x0C, 0x0C, 0x0F, 0x07, 0x00, // 38
    0x1F, 0x1F, 0x00, 0x00, // 39
    0xF0, 0xFC, 0x0E, 0x03, 0x01, 0x0F, 0x3F, 0x70, 0xC0, 0x80, // 40
    0x01, 0x03, 0x0E, 0xFC, 0xF0, 0x80, 0xC0, 0x70, 0x3F, 0x0F, // 41
    0x00, 0xC0, 0xC0, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x00, 0xC0, 0xC0, 0x00, 0x03, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, // 42
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0xC0, 0xC0, 0x00, 0xC0, 0xC0, 0x0F, 0x1F, 0x38, 0x30, 0x30, 0x30, 0x30, 0x38, 0x1F, 0x0F, 0x06, 0x07, 0x07, 0x06, 0x07, 0x07, // 43
    0x00, 0x00, 0x00, 0x00, 0xC0, 0xFC, 0x3C, 0x04, // 44
    0x00, 0x00, 0x00, 0x02, 0x02, 0x02, // 45
    0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x00, // 46
    0x00, 0x00, 0x00, 0x00, 0x80, 0x70, 0x0C, 0x03, 0x00, 0x00, 0xC0, 0x30, 0x0E, 0x01, 0x00, 0x00, 0x00, 0x00, // 47
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x0F, 0x06, 0x00, // 48
    0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, // 49
    0x00, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 50
    0x00, 0xFE, 0xFE, 0x30, 0x30, 0x1E, 0x30, 0x30, 0x3E, 0x1E, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 51
    0x00, 0x30, 0x78, 0xCC, 0x86, 0x86, 0x86, 0x86, 0x00, 0x00, 0x00, 0x18, 0x3C, 0x66, 0x63, 0x61, 0x61, 0x61, 0x60, 0x00, // 52
    0x00, 0xC0, 0xE0, 0x70, 0x30, 0x30, 0x70, 0xE0, 0xC0, 0x00, 0x00, 0x07, 0x0F, 0x1C, 0x1C, 0x1C, 0x1C, 0x0F, 0x07, 0x00, // 53
    0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x00, // 54
    0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x70, 0x70, 0x0F, 0x0F, 0x00, 0x00, // 55
    0x00, 0x00, 0xF0, 0xF0, 0x0E, 0x0E, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x00, // 56
    0x00, 0x3C, 0x7E, 0x66, 0x66, 0x66, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x00, // 57
    0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00, 0x00, // 58
    0x00, 0x70, 0x58, 0x4C, 0xC6, 0xC6, 0xC6, 0x86, 0x86, 0x82, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x00, // 59
    0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0x36, 0x36, 0xF0, 0xE0, 0x00, 0x0F, 0x1F, 0x38, 0x30, 0x31, 0x33, 0x3B, 0x1F, 0x0F, // 60
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x06, 0x06, 0x36, 0x36, 0x06, 0x36, 0x37, 0x03, 0x00, // 61
    0x00, 0x00, 0x00, 0x06, 0xC6, 0xE0, 0x36, 0x36, 0xF0, 0xE0, 0x00, 0x0F, 0x1F, 0x38, 0x30, 0x31, 0x33, 0x3B, 0x1F, 0x0F, // 62
    0x00, 0xC0, 0xE0, 0x60, 0x40, 0x00, 0x00, 0x00, 0x7B, 0xFF, 0x86, 0x86, 0x86, 0x82, // 63
    0x00, 0x00, 0x00, 0x00, 0xFF, 0x01, 0x01, 0x81, 0xC1, 0xE1, 0xFF, 0x38, 0x1C, 0x0E, 0x07, 0x03, 0xC0, 0xE0, 0x70, 0x38, 0xFF, 0x8E, 0x8F, 0xAB, 0x89, 0x88, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, // 64
    0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x06, 0x06, 0x06, // 65
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x06, 0x06, 0x06, 0x06, 0x36, 0x36, 0x07, 0x03, 0x00, // 66
    0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0xC0, 0xC0, 0x00, 0xC0, 0xC0, 0x00, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x06, 0x07, 0x03, 0x06, 0x07, 0x03, 0x00, // 67
    0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, // 68
    0x00, 0x00, 0x00, 0x40, 0x60, 0x60, 0x60, 0x60, 0xE0, 0xC0, 0x80, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, // 69
    0x00, 0x00, 0x00, 0x00, 0xE0, 0xB6, 0xB6, 0xE0, 0xC0, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x00, // 70
    0x00, 0x40, 0x60, 0x60, 0x60, 0x60, 0x60, 0xC0, 0x80, 0x00, 0x06, 0x06, 0x06, 0x36, 0x36, 0x06, 0x03, 0x01, 0x00, 0x00, // 71
    0x00, 0xF0, 0x98, 0x88, 0x88, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x07, 0x07, 0x06, 0x06, // 72
    0x00, 0x00, 0x00, 0x00, 0xC0, 0xD8, 0x18, 0xC6, 0xC6, 0x18, 0xD8, 0xC0, 0x00, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x06, 0x07, 0x03, 0x06, 0x07, 0x03, 0x00, // 73
    0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0xC0, 0x60, 0x60, 0x60, 0xE0, 0xC0, 0x00, 0x06, 0x06, 0x06, 0x07, 0x06, 0x07, 0x07, 0x06, 0x06, 0x06, 0x03, 0x01, 0x00, // 74
    0x00, 0x80, 0x00, 0x00, 0x50, 0x28, 0x28, 0x00, 0xFE, 0xFE, 0x00, 0x03, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, // 75
    0x00, 0x1C, 0x7C, 0xE0, 0x00, 0xFE, 0xFE, 0x00, 0x06, 0x06, 0x07, 0x06, 0x07, 0x07, // 76
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0F, 0x19, 0x19, 0x0F, 0x06, // 77
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0xC0, 0xC0, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x00, // 78
    0x00, 0x00, 0x80, 0xC0, 0x60, 0x60, 0xC0, 0x80, 0x40, 0x40, 0x61, 0x33, 0x1A, 0x0E, 0x07, 0x03, // 79
    0x00, 0x00, 0x0C, 0x0C, 0x00, 0x0C, 0x0C, 0x80, 0xC0, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, // 80
    0x00, 0xC0, 0xE0, 0x36, 0x36, 0x30, 0x00, 0x00, 0x00, 0x06, 0x06, 0x07, 0x03, 0x06, 0x06, 0x07, 0x03, 0x00, // 81
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x60, 0x30, 0x18, 0x0F, 0x06, // 82
    0x00, 0x00, 0x30, 0x30, 0x06, 0x06, 0x30, 0x30, 0x80, 0xC0, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x00, // 83
    0x00, 0x00, 0x00, 0x00, 0x00, 0xD8, 0xD8, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x00, // 84
    0x00, 0x00, 0x40, 0x60, 0x6C, 0x6C, 0x60, 0xE0, 0xC0, 0x80, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x01, 0x00, 0x00, // 85
    0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x03, 0x03, 0x06, 0x06, 0x06, // 86
    0x00, 0x00, 0x00, 0x00, 0x00, 0xCC, 0x2C, 0x20, 0x2C, 0xCC, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x07, 0x07, 0x03, 0x00, // 87
    0x00, 0x00, 0x80, 0xFF, 0x7F, 0x40, 0xD8, 0x98, 0x00, 0x06, 0x0F, 0x07, 0x06, 0x06, 0x06, 0x07, 0x03, 0x00, // 88
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x7F, 0x63, 0x60, 0x60, 0x60, 0x60, 0x6C, 0x7E, 0x36, 0x06, 0x06, // 89
    0x00, 0xC0, 0xE0, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x06, 0x06, 0x07, 0x03, 0x06, 0x06, 0x07, 0x03, 0x00, // 90
    0xFF, 0xFF, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0x80, 0x80, 0x80, // 91
    0x03, 0x0C, 0x70, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0E, 0x30, 0xC0, // 92
    0x01, 0x01, 0x01, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0xFF, 0xFF, // 93
    0x40, 0x20, 0x18, 0x04, 0x02, 0x02, 0x04, 0x18, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, // 95
    0x02, 0x06, 0x04, 0x00, 0x00, 0x00, // 96
    0x00, 0xFE, 0xFE, 0x00, 0x07, 0x07, // 97
    0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x33, 0x33, 0x06, 0x06, 0x06, // 98
    0x00, 0x00, 0xC0, 0xC0, 0x00, 0xC0, 0xC0, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x06, 0x06, 0x07, 0x07, 0x02, 0x07, 0x07, 0x02, 0x07, 0x07, 0x06, 0x06, // 99
    0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x06, 0x06, // 100
    0x00, 0x40, 0x60, 0x60, 0x60, 0x60, 0xE0, 0xC0, 0x80, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x06, 0x06, 0x06, // 101
    0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x2C, 0x2C, 0x20, 0xC0, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x03, 0x03, 0x07, 0x06, 0x06, // 102
    0x00, 0x00, 0x40, 0x60, 0x60, 0x60, 0x60, 0x40, 0xC0, 0x80, 0x80, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x36, 0x33, 0x07, 0x07, 0x06, 0x06, 0x06, // 103
    0x00, 0x00, 0x60, 0x30, 0xF0, 0x70, 0xF0, 0x30, 0xE0, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x07, 0x06, 0x07, 0x06, 0x06, // 104
    0x00, 0x00, 0x00, 0xC0, 0xD8, 0x18, 0xC6, 0xC6, 0x18, 0xD8, 0xC0, 0x00, 0x00, 0x06, 0x06, 0x06, 0x03, 0x07, 0x06, 0x03, 0x07, 0x06, 0x03, 0x07, 0x06, 0x06, // 105
    0x00, 0x00, 0x80, 0x00, 0x80, 0xC0, 0x60, 0x60, 0x60, 0xE0, 0xC0, 0x00, 0x00, 0x06, 0x06, 0x07, 0x06, 0x07, 0x07, 0x06, 0x06, 0x06, 0x03, 0x07, 0x06, 0x06, // 106
    0x00, 0x70, 0x58, 0x4C, 0xC6, 0xC6, 0xC6, 0x86, 0x06, 0x02, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x06, 0x06, 0x06, // 107
    0x00, 0x00, 0xFE, 0xFE, 0x00, 0x06, 0x06, 0x07, 0x03, 0x00, // 108
    0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x06, 0x06, 0x0F, 0x19, 0x19, 0x0F, 0x06, 0x06, // 109
    0x00, 0x00, 0x00, 0xCC, 0xCC, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x03, 0x03, 0x06, 0x06, 0x06, // 110
    0x00, 0x80, 0xC0, 0x60, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x40, 0x41, 0x43, 0x66, 0x36, 0x1F, 0x0F, 0x06, 0x06, // 111
    0x00, 0x00, 0x18, 0x18, 0xC0, 0x18, 0x18, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x03, 0x06, 0x06, 0x06, 0x06, // 112
    0x00, 0xC0, 0xE0, 0x36, 0x36, 0x30, 0x00, 0x00, 0x00, 0x06, 0x06, 0x07, 0x03, 0x03, 0x03, 0x07, 0x06, 0x06, // 113
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x60, 0x30, 0x1F, 0x0E, 0x06, // 114
    0x00, 0x00, 0x18, 0x18, 0xC6, 0xC6, 0x18, 0x18, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x06, 0x06, 0x06, 0x06, // 115
    0x00, 0x00, 0x00, 0x00, 0x00, 0xD8, 0xD8, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x06, 0x06, // 116
    0x00, 0x60, 0x60, 0x6C, 0x6C, 0x60, 0xE0, 0xC0, 0x80, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x03, 0x07, 0x06, 0x06, 0x06, // 117
    0x00, 0xC0, 0x20, 0x20, 0x20, 0xC0, 0x00, 0x00, 0x03, 0x06, 0x06, 0x06, 0x03, 0x00, // 118
    0x00, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xEC, 0x20, 0x20, 0xEC, 0xCC, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x03, 0x03, 0x07, 0x07, 0x06, 0x06, // 119
    0x00, 0x00, 0x80, 0xFF, 0x7F, 0x40, 0xD8, 0x98, 0x00, 0x06, 0x0F, 0x07, 0x06, 0x06, 0x06, 0x03, 0x07, 0x06, // 120
    0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x06, 0x36, 0x36, 0x03, 0x03, 0x36, 0x36, 0x06, // 121
    0x00, 0xC0, 0xE0, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x06, 0x06, 0x07, 0x03, 0x03, 0x03, 0x07, 0x06, 0x06, // 122
    0x80, 0x80, 0xC0, 0x7C, 0x3E, 0x03, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x3F, 0x7E, 0xC0, 0x80, 0x80, 0x80, // 123
    0xFF, 0xFF, 0xFF, 0xFF, // 124
    0x01, 0x01, 0x01, 0x03, 0x3E, 0x7C, 0xC0, 0x80, 0x80, 0x80, 0x80, 0x80, 0xC0, 0x7E, 0x3F, 0x01, 0x00, 0x00, // 125
    0x00, 0x00, 0x00, 0xE0, 0xE0, 0x60, 0x60, 0x00, 0x00, 0x06, 0x06, 0x07, 0x07, 0x06, 0x06, 0x00, // 126
    0xFE, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xFE, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F // 127
    
};

#endif
