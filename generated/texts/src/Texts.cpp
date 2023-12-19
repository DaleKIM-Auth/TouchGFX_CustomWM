/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <stdarg.h>
#include <touchgfx/TextProvider.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/TypedText.hpp>
#include <touchgfx/Unicode.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <texts/TypedTextDatabase.hpp>

uint16_t touchgfx::Font::getStringWidth(const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthLTR(TEXT_DIRECTION_LTR, text, pArg);
    va_end(pArg);
    return width;
}

uint16_t touchgfx::Font::getStringWidth(touchgfx::TextDirection textDirection, const touchgfx::Unicode::UnicodeChar* text, ...) const
{
    va_list pArg;
    va_start(pArg, text);
    uint16_t width = getStringWidthLTR(textDirection, text, pArg);
    va_end(pArg);
    return width;
}

touchgfx::Unicode::UnicodeChar touchgfx::TextProvider::getNextLigature(TextDirection direction)
{
    if (fontGsubTable && nextCharacters.peekChar())
    {
        substituteGlyphs();
        if (nextCharacters.peekChar(1) == 0x093F) // Hindi I-matra
        {
            nextCharacters.replaceAt1(nextCharacters.peekChar());
            nextCharacters.replaceAt0(0x093F);
        }
    }
    return getNextChar();
}

void touchgfx::TextProvider::initializeInternal()
{
    fillInputBuffer();
}

void touchgfx::LCD::drawString(touchgfx::Rect widgetArea, const touchgfx::Rect& invalidatedArea, const touchgfx::LCD::StringVisuals& stringVisuals, const touchgfx::Unicode::UnicodeChar* format, ...)
{
    va_list pArg;
    va_start(pArg, format);
    drawStringLTR(widgetArea, invalidatedArea, stringVisuals, format, pArg);
    va_end(pArg);
}

// Default TypedTextDatabase
extern const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[];

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern const touchgfx::Unicode::UnicodeChar texts_all_languages[] TEXT_LOCATION_FLASH_ATTRIBUTE = {
    0x54, 0x68, 0x65, 0x20, 0x41, 0x72, 0x6d, 0xae, 0x20, 0x43, 0x6f, 0x72, 0x74, 0x65, 0x78, 0xae, 0x2d, 0x4d, 0x34, 0x2d, 0x62, 0x61, 0x73, 0x65, 0x64, 0x20, 0x53, 0x54, 0x4d, 0x33, 0x32, 0x46, 0x34, 0x20, 0x4d, 0x43, 0x55, 0x20, 0x73, 0x65, 0x72, 0x69, 0x65, 0x73, 0x20, 0x6c, 0x65, 0x76, 0x65, 0x72, 0x61, 0x67, 0x65, 0x73, 0x20, 0x53, 0x54, 0x2019, 0x73, 0x20, 0x4e, 0x56, 0x4d, 0x20, 0x74, 0x65, 0x63, 0x68, 0x6e, 0x6f, 0x6c, 0x6f, 0x67, 0x79, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x41, 0x52, 0x54, 0x20, 0x41, 0x63, 0x63, 0x65, 0x6c, 0x65, 0x72, 0x61, 0x74, 0x6f, 0x72, 0x2122, 0x20, 0x74, 0x6f, 0x20, 0x72, 0x65, 0x61, 0x63, 0x68, 0x20, 0x74, 0x68, 0x65, 0x20, 0x69, 0x6e, 0x64, 0x75, 0x73, 0x74, 0x72, 0x79, 0x2019, 0x73, 0x20, 0x68, 0x69, 0x67, 0x68, 0x65, 0x73, 0x74, 0x20, 0x62, 0x65, 0x6e, 0x63, 0x68, 0x6d, 0x61, 0x72, 0x6b, 0x20, 0x73, 0x63, 0x6f, 0x72, 0x65, 0x73, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x43, 0x6f, 0x72, 0x74, 0x65, 0x78, 0x2d, 0x4d, 0x2d, 0x62, 0x61, 0x73, 0x65, 0x64, 0x20, 0x6d, 0x69, 0x63, 0x72, 0x6f, 0x63, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x6c, 0x65, 0x72, 0x73, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x75, 0x70, 0x20, 0x74, 0x6f, 0x20, 0x32, 0x32, 0x35, 0x20, 0x44, 0x4d, 0x49, 0x50, 0x53, 0x2f, 0x36, 0x30, 0x38, 0x20, 0x43, 0x6f, 0x72, 0x65, 0x4d, 0x61, 0x72, 0x6b, 0x20, 0x65, 0x78, 0x65, 0x63, 0x75, 0x74, 0x69, 0x6e, 0x67, 0x20, 0x66, 0x72, 0x6f, 0x6d, 0x20, 0x46, 0x6c, 0x61, 0x73, 0x68, 0x20, 0x6d, 0x65, 0x6d, 0x6f, 0x72, 0x79, 0x20, 0x61, 0x74, 0x20, 0x75, 0x70, 0x20, 0x74, 0x6f, 0x20, 0x31, 0x38, 0x30, 0x20, 0x4d, 0x48, 0x7a, 0x20, 0x6f, 0x70, 0x65, 0x72, 0x61, 0x74, 0x69, 0x6e, 0x67, 0x20, 0x66, 0x72, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x63, 0x79, 0x2e, 0x0, // @0 "The Arm? Cortex?-M4-based STM32F4 MCU series leverages ST?s NVM technology and ART Accelerator? to reach the industry?s highest benchmark scores for Cortex-M-based microcontrollers with up to 225 DMIPS/608 CoreMark executing from Flash memory at up to 180 MHz operating frequency."
    0x54, 0x68, 0x65, 0x20, 0x41, 0x72, 0x6d, 0xae, 0x20, 0x43, 0x6f, 0x72, 0x74, 0x65, 0x78, 0xae, 0x2d, 0x4d, 0x37, 0x2d, 0x62, 0x61, 0x73, 0x65, 0x64, 0x20, 0x53, 0x54, 0x4d, 0x33, 0x32, 0x48, 0x37, 0x20, 0x4d, 0x43, 0x55, 0x20, 0x73, 0x65, 0x72, 0x69, 0x65, 0x73, 0x20, 0x6c, 0x65, 0x76, 0x65, 0x72, 0x61, 0x67, 0x65, 0x73, 0x20, 0x53, 0x54, 0x2019, 0x73, 0x20, 0x4e, 0x6f, 0x6e, 0x2d, 0x56, 0x6f, 0x6c, 0x61, 0x74, 0x69, 0x6c, 0x65, 0x2d, 0x4d, 0x65, 0x6d, 0x6f, 0x72, 0x79, 0x20, 0x28, 0x4e, 0x56, 0x4d, 0x29, 0x20, 0x74, 0x65, 0x63, 0x68, 0x6e, 0x6f, 0x6c, 0x6f, 0x67, 0x79, 0x20, 0x74, 0x6f, 0x20, 0x72, 0x65, 0x61, 0x63, 0x68, 0x20, 0x74, 0x68, 0x65, 0x20, 0x69, 0x6e, 0x64, 0x75, 0x73, 0x74, 0x72, 0x79, 0x2019, 0x73, 0x20, 0x68, 0x69, 0x67, 0x68, 0x65, 0x73, 0x74, 0x20, 0x62, 0x65, 0x6e, 0x63, 0x68, 0x6d, 0x61, 0x72, 0x6b, 0x20, 0x73, 0x63, 0x6f, 0x72, 0x65, 0x73, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x43, 0x6f, 0x72, 0x74, 0x65, 0x78, 0x2d, 0x4d, 0x2d, 0x62, 0x61, 0x73, 0x65, 0x64, 0x20, 0x6d, 0x69, 0x63, 0x72, 0x6f, 0x63, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x6c, 0x65, 0x72, 0x73, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x75, 0x70, 0x20, 0x74, 0x6f, 0x20, 0x31, 0x33, 0x32, 0x37, 0x20, 0x44, 0x4d, 0x49, 0x50, 0x53, 0x2f, 0x20, 0x33, 0x32, 0x32, 0x34, 0x20, 0x43, 0x6f, 0x72, 0x65, 0x4d, 0x61, 0x72, 0x6b, 0x20, 0x65, 0x78, 0x65, 0x63, 0x75, 0x74, 0x69, 0x6e, 0x67, 0x20, 0x66, 0x72, 0x6f, 0x6d, 0x20, 0x65, 0x6d, 0x62, 0x65, 0x64, 0x64, 0x65, 0x64, 0x20, 0x46, 0x6c, 0x61, 0x73, 0x68, 0x20, 0x6d, 0x65, 0x6d, 0x6f, 0x72, 0x79, 0x2e, 0x0, // @281 "The Arm? Cortex?-M7-based STM32H7 MCU series leverages ST?s Non-Volatile-Memory (NVM) technology to reach the industry?s highest benchmark scores for Cortex-M-based microcontrollers with up to 1327 DMIPS/ 3224 CoreMark executing from embedded Flash memory."
    0x41, 0x20, 0x67, 0x65, 0x6e, 0x65, 0x72, 0x61, 0x6c, 0x2d, 0x70, 0x75, 0x72, 0x70, 0x6f, 0x73, 0x65, 0x20, 0x6d, 0x69, 0x63, 0x72, 0x6f, 0x70, 0x72, 0x6f, 0x63, 0x65, 0x73, 0x73, 0x6f, 0x72, 0x20, 0x70, 0x6f, 0x72, 0x74, 0x66, 0x6f, 0x6c, 0x69, 0x6f, 0x20, 0x65, 0x6e, 0x61, 0x62, 0x6c, 0x69, 0x6e, 0x67, 0x20, 0x65, 0x61, 0x73, 0x79, 0x20, 0x64, 0x65, 0x76, 0x65, 0x6c, 0x6f, 0x70, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x61, 0x20, 0x62, 0x72, 0x6f, 0x61, 0x64, 0x20, 0x72, 0x61, 0x6e, 0x67, 0x65, 0x20, 0x6f, 0x66, 0x20, 0x61, 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x2c, 0x20, 0x74, 0x68, 0x65, 0x20, 0x53, 0x54, 0x4d, 0x33, 0x32, 0x4d, 0x50, 0x31, 0x20, 0x73, 0x65, 0x72, 0x69, 0x65, 0x73, 0x20, 0x68, 0x61, 0x73, 0x20, 0x74, 0x68, 0x65, 0x20, 0x61, 0x62, 0x69, 0x6c, 0x69, 0x74, 0x79, 0x20, 0x74, 0x6f, 0x20, 0x73, 0x75, 0x70, 0x70, 0x6f, 0x72, 0x74, 0x20, 0x6d, 0x75, 0x6c, 0x74, 0x69, 0x70, 0x6c, 0x65, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x66, 0x6c, 0x65, 0x78, 0x69, 0x62, 0x6c, 0x65, 0x20, 0x61, 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x2c, 0x20, 0x61, 0x63, 0x68, 0x69, 0x65, 0x76, 0x69, 0x6e, 0x67, 0x20, 0x74, 0x68, 0x65, 0x20, 0x62, 0x65, 0x73, 0x74, 0x20, 0x70, 0x65, 0x72, 0x66, 0x6f, 0x72, 0x6d, 0x61, 0x6e, 0x63, 0x65, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x70, 0x6f, 0x77, 0x65, 0x72, 0x20, 0x66, 0x69, 0x67, 0x75, 0x72, 0x65, 0x73, 0x20, 0x61, 0x74, 0x20, 0x61, 0x6e, 0x79, 0x20, 0x74, 0x69, 0x6d, 0x65, 0x2e, 0x0, // @538 "A general-purpose microprocessor portfolio enabling easy development for a broad range of applications, the STM32MP1 series has the ability to support multiple and flexible applications, achieving the best performance and power figures at any time."
    0x53, 0x54, 0x2019, 0x73, 0x20, 0x41, 0x72, 0x6d, 0xae, 0x20, 0x43, 0x6f, 0x72, 0x74, 0x65, 0x78, 0xae, 0x2d, 0x4d, 0x33, 0x2d, 0x62, 0x61, 0x73, 0x65, 0x64, 0x20, 0x53, 0x54, 0x4d, 0x33, 0x32, 0x4c, 0x31, 0x20, 0x73, 0x65, 0x72, 0x69, 0x65, 0x73, 0x20, 0x75, 0x73, 0x65, 0x73, 0x20, 0x53, 0x54, 0x2019, 0x73, 0x20, 0x70, 0x72, 0x6f, 0x70, 0x72, 0x69, 0x65, 0x74, 0x61, 0x72, 0x79, 0x20, 0x75, 0x6c, 0x74, 0x72, 0x61, 0x2d, 0x6c, 0x6f, 0x77, 0x2d, 0x6c, 0x65, 0x61, 0x6b, 0x61, 0x67, 0x65, 0x20, 0x70, 0x72, 0x6f, 0x63, 0x65, 0x73, 0x73, 0x20, 0x74, 0x65, 0x63, 0x68, 0x6e, 0x6f, 0x6c, 0x6f, 0x67, 0x79, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x61, 0x6e, 0x20, 0x69, 0x6e, 0x6e, 0x6f, 0x76, 0x61, 0x74, 0x69, 0x76, 0x65, 0x20, 0x61, 0x75, 0x74, 0x6f, 0x6e, 0x6f, 0x6d, 0x6f, 0x75, 0x73, 0x20, 0x64, 0x79, 0x6e, 0x61, 0x6d, 0x69, 0x63, 0x20, 0x76, 0x6f, 0x6c, 0x74, 0x61, 0x67, 0x65, 0x20, 0x73, 0x63, 0x61, 0x6c, 0x69, 0x6e, 0x67, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x35, 0x20, 0x6c, 0x6f, 0x77, 0x2d, 0x70, 0x6f, 0x77, 0x65, 0x72, 0x20, 0x6d, 0x6f, 0x64, 0x65, 0x73, 0x20, 0x6f, 0x66, 0x66, 0x65, 0x72, 0x69, 0x6e, 0x67, 0x20, 0x75, 0x6e, 0x70, 0x72, 0x65, 0x63, 0x65, 0x64, 0x65, 0x6e, 0x74, 0x65, 0x64, 0x20, 0x70, 0x6c, 0x61, 0x74, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x66, 0x6c, 0x65, 0x78, 0x69, 0x62, 0x69, 0x6c, 0x69, 0x74, 0x79, 0x20, 0x74, 0x6f, 0x20, 0x66, 0x69, 0x74, 0x20, 0x61, 0x6e, 0x79, 0x20, 0x61, 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x0, // @787 "ST?s Arm? Cortex?-M3-based STM32L1 series uses ST?s proprietary ultra-low-leakage process technology with an innovative autonomous dynamic voltage scaling and 5 low-power modes offering unprecedented platform flexibility to fit any application."
    0x54, 0x68, 0x65, 0x20, 0x53, 0x54, 0x4d, 0x33, 0x32, 0x46, 0x33, 0x20, 0x53, 0x65, 0x72, 0x69, 0x65, 0x73, 0x20, 0x63, 0x6f, 0x6d, 0x62, 0x69, 0x6e, 0x65, 0x73, 0x20, 0x61, 0x20, 0x33, 0x32, 0x2d, 0x62, 0x69, 0x74, 0x20, 0x41, 0x72, 0x6d, 0xae, 0x20, 0x43, 0x6f, 0x72, 0x74, 0x65, 0x78, 0xae, 0x2d, 0x4d, 0x34, 0x20, 0x63, 0x6f, 0x72, 0x65, 0x20, 0x28, 0x77, 0x69, 0x74, 0x68, 0x20, 0x46, 0x50, 0x55, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x44, 0x53, 0x50, 0x20, 0x69, 0x6e, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x29, 0x20, 0x72, 0x75, 0x6e, 0x6e, 0x69, 0x6e, 0x67, 0x20, 0x61, 0x74, 0x20, 0x37, 0x32, 0x20, 0x4d, 0x48, 0x7a, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x61, 0x20, 0x68, 0x69, 0x67, 0x68, 0x20, 0x6e, 0x75, 0x6d, 0x62, 0x65, 0x72, 0x20, 0x6f, 0x66, 0x20, 0x69, 0x6e, 0x74, 0x65, 0x67, 0x72, 0x61, 0x74, 0x65, 0x64, 0x20, 0x61, 0x6e, 0x61, 0x6c, 0x6f, 0x67, 0x20, 0x70, 0x65, 0x72, 0x69, 0x70, 0x68, 0x65, 0x72, 0x61, 0x6c, 0x73, 0x20, 0x6c, 0x65, 0x61, 0x64, 0x69, 0x6e, 0x67, 0x20, 0x74, 0x6f, 0x20, 0x63, 0x6f, 0x73, 0x74, 0x20, 0x72, 0x65, 0x64, 0x75, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x61, 0x74, 0x20, 0x61, 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x6c, 0x65, 0x76, 0x65, 0x6c, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x73, 0x69, 0x6d, 0x70, 0x6c, 0x69, 0x66, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x61, 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x64, 0x65, 0x73, 0x69, 0x67, 0x6e, 0x2e, 0x0, // @1032 "The STM32F3 Series combines a 32-bit Arm? Cortex?-M4 core (with FPU and DSP instructions) running at 72 MHz with a high number of integrated analog peripherals leading to cost reduction at application level and simplifying application design."
    0x54, 0x61, 0x6b, 0x69, 0x6e, 0x67, 0x20, 0x61, 0x64, 0x76, 0x61, 0x6e, 0x74, 0x61, 0x67, 0x65, 0x20, 0x6f, 0x66, 0x20, 0x53, 0x54, 0x2019, 0x73, 0x20, 0x41, 0x52, 0x54, 0x20, 0x41, 0x63, 0x63, 0x65, 0x6c, 0x65, 0x72, 0x61, 0x74, 0x6f, 0x72, 0x2122, 0x20, 0x61, 0x73, 0x20, 0x77, 0x65, 0x6c, 0x6c, 0x20, 0x61, 0x73, 0x20, 0x61, 0x6e, 0x20, 0x4c, 0x31, 0x20, 0x63, 0x61, 0x63, 0x68, 0x65, 0x2c, 0x20, 0x53, 0x54, 0x4d, 0x33, 0x32, 0x46, 0x37, 0x20, 0x6d, 0x69, 0x63, 0x72, 0x6f, 0x63, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x6c, 0x65, 0x72, 0x73, 0x20, 0x64, 0x65, 0x6c, 0x69, 0x76, 0x65, 0x72, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6d, 0x61, 0x78, 0x69, 0x6d, 0x75, 0x6d, 0x20, 0x74, 0x68, 0x65, 0x6f, 0x72, 0x65, 0x74, 0x69, 0x63, 0x61, 0x6c, 0x20, 0x70, 0x65, 0x72, 0x66, 0x6f, 0x72, 0x6d, 0x61, 0x6e, 0x63, 0x65, 0x20, 0x6f, 0x66, 0x20, 0x74, 0x68, 0x65, 0x20, 0x43, 0x6f, 0x72, 0x74, 0x65, 0x78, 0x2d, 0x4d, 0x37, 0x20, 0x63, 0x6f, 0x72, 0x65, 0x2c, 0x20, 0x72, 0x65, 0x67, 0x61, 0x72, 0x64, 0x6c, 0x65, 0x73, 0x73, 0x20, 0x69, 0x66, 0x20, 0x63, 0x6f, 0x64, 0x65, 0x20, 0x69, 0x73, 0x20, 0x65, 0x78, 0x65, 0x63, 0x75, 0x74, 0x65, 0x64, 0x20, 0x66, 0x72, 0x6f, 0x6d, 0x20, 0x65, 0x6d, 0x62, 0x65, 0x64, 0x64, 0x65, 0x64, 0x20, 0x46, 0x6c, 0x61, 0x73, 0x68, 0x20, 0x6f, 0x72, 0x20, 0x65, 0x78, 0x74, 0x65, 0x72, 0x6e, 0x61, 0x6c, 0x20, 0x6d, 0x65, 0x6d, 0x6f, 0x72, 0x79, 0x2e, 0x0, // @1275 "Taking advantage of ST?s ART Accelerator? as well as an L1 cache, STM32F7 microcontrollers deliver the maximum theoretical performance of the Cortex-M7 core, regardless if code is executed from embedded Flash or external memory."
    0x42, 0x61, 0x73, 0x65, 0x64, 0x20, 0x6f, 0x6e, 0x20, 0x61, 0x6e, 0x20, 0x41, 0x72, 0x6d, 0xae, 0x202f, 0x43, 0x6f, 0x72, 0x74, 0x65, 0x78, 0xae, 0x2010, 0x4d, 0x34, 0x20, 0x63, 0x6f, 0x72, 0x65, 0x20, 0x72, 0x75, 0x6e, 0x6e, 0x69, 0x6e, 0x67, 0x20, 0x61, 0x74, 0x20, 0x36, 0x34, 0x20, 0x4d, 0x48, 0x7a, 0x20, 0x28, 0x61, 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x70, 0x72, 0x6f, 0x63, 0x65, 0x73, 0x73, 0x6f, 0x72, 0x29, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x61, 0x6e, 0x20, 0x41, 0x72, 0x6d, 0xae, 0x20, 0x43, 0x6f, 0x72, 0x74, 0x65, 0x78, 0xae, 0x2010, 0x4d, 0x30, 0x2b, 0x20, 0x63, 0x6f, 0x72, 0x65, 0x20, 0x61, 0x74, 0x20, 0x33, 0x32, 0x20, 0x4d, 0x48, 0x7a, 0x20, 0x28, 0x6e, 0x65, 0x74, 0x77, 0x6f, 0x72, 0x6b, 0x20, 0x70, 0x72, 0x6f, 0x63, 0x65, 0x73, 0x73, 0x6f, 0x72, 0x29, 0x2c, 0x20, 0x74, 0x68, 0x65, 0x20, 0x53, 0x54, 0x4d, 0x33, 0x32, 0x57, 0x42, 0x20, 0x77, 0x69, 0x72, 0x65, 0x6c, 0x65, 0x73, 0x73, 0x20, 0x6d, 0x69, 0x63, 0x72, 0x6f, 0x63, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x6c, 0x65, 0x72, 0x20, 0x69, 0x73, 0x20, 0x61, 0x20, 0x73, 0x65, 0x6c, 0x66, 0x2d, 0x73, 0x75, 0x66, 0x66, 0x69, 0x63, 0x69, 0x65, 0x6e, 0x74, 0x20, 0x73, 0x6f, 0x6c, 0x75, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x0, // @1504 "Based on an Arm??Cortex??M4 core running at 64 MHz (application processor) and an Arm? Cortex??M0+ core at 32 MHz (network processor), the STM32WB wireless microcontroller is a self-sufficient solution."
    0x54, 0x68, 0x65, 0x20, 0x41, 0x72, 0x6d, 0xae, 0x20, 0x43, 0x6f, 0x72, 0x74, 0x65, 0x78, 0xae, 0x2d, 0x4d, 0x33, 0x2d, 0x62, 0x61, 0x73, 0x65, 0x64, 0x20, 0x53, 0x54, 0x4d, 0x33, 0x32, 0x20, 0x46, 0x32, 0x20, 0x73, 0x65, 0x72, 0x69, 0x65, 0x73, 0x20, 0x75, 0x73, 0x65, 0x73, 0x20, 0x53, 0x54, 0x2019, 0x73, 0x20, 0x61, 0x64, 0x76, 0x61, 0x6e, 0x63, 0x65, 0x64, 0x20, 0x39, 0x30, 0x20, 0x6e, 0x6d, 0x20, 0x4e, 0x56, 0x4d, 0x20, 0x70, 0x72, 0x6f, 0x63, 0x65, 0x73, 0x73, 0x20, 0x74, 0x65, 0x63, 0x68, 0x6e, 0x6f, 0x6c, 0x6f, 0x67, 0x79, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x74, 0x68, 0x65, 0x20, 0x69, 0x6e, 0x6e, 0x6f, 0x76, 0x61, 0x74, 0x69, 0x76, 0x65, 0x20, 0x61, 0x64, 0x61, 0x70, 0x74, 0x69, 0x76, 0x65, 0x20, 0x72, 0x65, 0x61, 0x6c, 0x2d, 0x74, 0x69, 0x6d, 0x65, 0x20, 0x6d, 0x65, 0x6d, 0x6f, 0x72, 0x79, 0x20, 0x61, 0x63, 0x63, 0x65, 0x6c, 0x65, 0x72, 0x61, 0x74, 0x6f, 0x72, 0x20, 0x28, 0x41, 0x52, 0x54, 0x20, 0x41, 0x63, 0x63, 0x65, 0x6c, 0x65, 0x72, 0x61, 0x74, 0x6f, 0x72, 0x2122, 0x29, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x6d, 0x75, 0x6c, 0x74, 0x69, 0x2d, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x20, 0x62, 0x75, 0x73, 0x20, 0x6d, 0x61, 0x74, 0x72, 0x69, 0x78, 0x2e, 0x0, // @1707 "The Arm? Cortex?-M3-based STM32 F2 series uses ST?s advanced 90 nm NVM process technology with the innovative adaptive real-time memory accelerator (ART Accelerator?) and multi-layer bus matrix."
    0x44, 0x65, 0x76, 0x69, 0x63, 0x65, 0x73, 0x20, 0x69, 0x6e, 0x20, 0x53, 0x54, 0x2019, 0x73, 0x20, 0x41, 0x72, 0x6d, 0xae, 0x20, 0x43, 0x6f, 0x72, 0x74, 0x65, 0x78, 0xae, 0x2d, 0x4d, 0x30, 0x2d, 0x62, 0x61, 0x73, 0x65, 0x64, 0x20, 0x53, 0x54, 0x4d, 0x33, 0x32, 0x46, 0x30, 0x20, 0x53, 0x65, 0x72, 0x69, 0x65, 0x73, 0x20, 0x64, 0x65, 0x6c, 0x69, 0x76, 0x65, 0x72, 0x20, 0x33, 0x32, 0x2d, 0x62, 0x69, 0x74, 0x20, 0x70, 0x65, 0x72, 0x66, 0x6f, 0x72, 0x6d, 0x61, 0x6e, 0x63, 0x65, 0x20, 0x77, 0x68, 0x69, 0x6c, 0x65, 0x20, 0x66, 0x65, 0x61, 0x74, 0x75, 0x72, 0x69, 0x6e, 0x67, 0x20, 0x74, 0x68, 0x65, 0x20, 0x65, 0x73, 0x73, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x73, 0x20, 0x6f, 0x66, 0x20, 0x74, 0x68, 0x65, 0x20, 0x53, 0x54, 0x4d, 0x33, 0x32, 0x20, 0x66, 0x61, 0x6d, 0x69, 0x6c, 0x79, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x61, 0x72, 0x65, 0x20, 0x70, 0x61, 0x72, 0x74, 0x69, 0x63, 0x75, 0x6c, 0x61, 0x72, 0x6c, 0x79, 0x20, 0x73, 0x75, 0x69, 0x74, 0x65, 0x64, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x63, 0x6f, 0x73, 0x74, 0x2d, 0x73, 0x65, 0x6e, 0x73, 0x69, 0x74, 0x69, 0x76, 0x65, 0x20, 0x61, 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x2e, 0x0, // @1902 "Devices in ST?s Arm? Cortex?-M0-based STM32F0 Series deliver 32-bit performance while featuring the essentials of the STM32 family and are particularly suited for cost-sensitive applications."
    0x54, 0x68, 0x65, 0x20, 0x6e, 0x65, 0x77, 0x20, 0x53, 0x54, 0x4d, 0x33, 0x32, 0x47, 0x30, 0x20, 0x53, 0x65, 0x72, 0x69, 0x65, 0x73, 0x20, 0x69, 0x73, 0x20, 0x6e, 0x6f, 0x74, 0x20, 0x73, 0x69, 0x6d, 0x70, 0x6c, 0x79, 0x20, 0x61, 0x6e, 0x6f, 0x74, 0x68, 0x65, 0x72, 0x20, 0x41, 0x72, 0x6d, 0xae, 0x20, 0x43, 0x6f, 0x72, 0x74, 0x65, 0x78, 0xae, 0x2d, 0x4d, 0x30, 0x2b, 0x20, 0x6d, 0x69, 0x63, 0x72, 0x6f, 0x63, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x6c, 0x65, 0x72, 0x2e, 0x20, 0x49, 0x74, 0x20, 0x73, 0x65, 0x74, 0x73, 0x20, 0x61, 0x20, 0x6e, 0x65, 0x77, 0x20, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x6f, 0x66, 0x20, 0x77, 0x68, 0x61, 0x74, 0x20, 0x61, 0x6e, 0x20, 0x65, 0x66, 0x66, 0x69, 0x63, 0x69, 0x65, 0x6e, 0x74, 0x20, 0x6d, 0x69, 0x63, 0x72, 0x6f, 0x63, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x6c, 0x65, 0x72, 0x20, 0x6d, 0x75, 0x73, 0x74, 0x20, 0x6f, 0x66, 0x66, 0x65, 0x72, 0x2e, 0x0, // @2094 "The new STM32G0 Series is not simply another Arm? Cortex?-M0+ microcontroller. It sets a new definition of what an efficient microcontroller must offer."
    0x54, 0x68, 0x65, 0x20, 0x53, 0x54, 0x4d, 0x33, 0x32, 0x4c, 0x30, 0x20, 0x73, 0x65, 0x72, 0x69, 0x65, 0x73, 0x20, 0x69, 0x73, 0x20, 0x53, 0x54, 0x2019, 0x73, 0x20, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x2d, 0x6c, 0x65, 0x76, 0x65, 0x6c, 0x20, 0x72, 0x61, 0x6e, 0x67, 0x65, 0x20, 0x6f, 0x66, 0x20, 0x33, 0x32, 0x2d, 0x62, 0x69, 0x74, 0x20, 0x75, 0x6c, 0x74, 0x72, 0x61, 0x2d, 0x6c, 0x6f, 0x77, 0x2d, 0x70, 0x6f, 0x77, 0x65, 0x72, 0x20, 0x4d, 0x43, 0x55, 0x73, 0x20, 0x64, 0x65, 0x73, 0x69, 0x67, 0x6e, 0x65, 0x64, 0x20, 0x74, 0x6f, 0x20, 0x61, 0x63, 0x68, 0x69, 0x65, 0x76, 0x65, 0x20, 0x61, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x73, 0x74, 0x61, 0x6e, 0x64, 0x69, 0x6e, 0x67, 0x6c, 0x79, 0x20, 0x6c, 0x6f, 0x77, 0x20, 0x70, 0x6f, 0x77, 0x65, 0x72, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x75, 0x6d, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x6c, 0x65, 0x76, 0x65, 0x6c, 0x2e, 0x0, // @2247 "The STM32L0 series is ST?s entry-level range of 32-bit ultra-low-power MCUs designed to achieve an outstandingly low power consumption level."
    0x53, 0x54, 0x27, 0x73, 0x20, 0x53, 0x54, 0x4d, 0x33, 0x32, 0x46, 0x31, 0x20, 0x53, 0x65, 0x72, 0x69, 0x65, 0x73, 0x20, 0x6f, 0x66, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x73, 0x74, 0x72, 0x65, 0x61, 0x6d, 0x20, 0x4d, 0x43, 0x55, 0x73, 0x20, 0x63, 0x6f, 0x76, 0x65, 0x72, 0x73, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6e, 0x65, 0x65, 0x64, 0x73, 0x20, 0x6f, 0x66, 0x20, 0x61, 0x20, 0x6c, 0x61, 0x72, 0x67, 0x65, 0x20, 0x76, 0x61, 0x72, 0x69, 0x65, 0x74, 0x79, 0x20, 0x6f, 0x66, 0x20, 0x61, 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x20, 0x69, 0x6e, 0x20, 0x74, 0x68, 0x65, 0x20, 0x69, 0x6e, 0x64, 0x75, 0x73, 0x74, 0x72, 0x69, 0x61, 0x6c, 0x2c, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x63, 0x61, 0x6c, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x75, 0x6d, 0x65, 0x72, 0x20, 0x6d, 0x61, 0x72, 0x6b, 0x65, 0x74, 0x73, 0x2e, 0x20, 0x0, // @2389 "ST's STM32F1 Series of mainstream MCUs covers the needs of a large variety of applications in the industrial, medical and consumer markets. "
    0x54, 0x68, 0x65, 0x20, 0x53, 0x54, 0x4d, 0x33, 0x32, 0x57, 0x4c, 0x20, 0x53, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x2d, 0x4f, 0x6e, 0x2d, 0x43, 0x68, 0x69, 0x70, 0x20, 0x69, 0x6e, 0x74, 0x65, 0x67, 0x72, 0x61, 0x74, 0x65, 0x73, 0x20, 0x62, 0x6f, 0x74, 0x68, 0x20, 0x61, 0x20, 0x67, 0x65, 0x6e, 0x65, 0x72, 0x61, 0x6c, 0x20, 0x70, 0x75, 0x72, 0x70, 0x6f, 0x73, 0x65, 0x20, 0x6d, 0x69, 0x63, 0x72, 0x6f, 0x63, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x6c, 0x65, 0x72, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x61, 0x20, 0x73, 0x75, 0x62, 0x2d, 0x47, 0x48, 0x7a, 0x20, 0x72, 0x61, 0x64, 0x69, 0x6f, 0x20, 0x6f, 0x6e, 0x20, 0x74, 0x68, 0x65, 0x20, 0x73, 0x61, 0x6d, 0x65, 0x20, 0x63, 0x68, 0x69, 0x70, 0x2e, 0x0, // @2530 "The STM32WL System-On-Chip integrates both a general purpose microcontroller and a sub-GHz radio on the same chip."
    0x53, 0x54, 0x20, 0x68, 0x61, 0x73, 0x20, 0x62, 0x75, 0x69, 0x6c, 0x74, 0x20, 0x61, 0x20, 0x6e, 0x65, 0x77, 0x20, 0x61, 0x72, 0x63, 0x68, 0x69, 0x74, 0x65, 0x63, 0x74, 0x75, 0x72, 0x65, 0x20, 0x74, 0x6f, 0x20, 0x72, 0x65, 0x61, 0x63, 0x68, 0x20, 0x62, 0x65, 0x73, 0x74, 0x2d, 0x69, 0x6e, 0x2d, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x20, 0x75, 0x6c, 0x74, 0x72, 0x61, 0x2d, 0x6c, 0x6f, 0x77, 0x2d, 0x70, 0x6f, 0x77, 0x65, 0x72, 0x20, 0x66, 0x69, 0x67, 0x75, 0x72, 0x65, 0x73, 0x20, 0x74, 0x68, 0x61, 0x6e, 0x6b, 0x73, 0x20, 0x74, 0x6f, 0x20, 0x69, 0x74, 0x73, 0x20, 0x68, 0x69, 0x67, 0x68, 0x20, 0x66, 0x6c, 0x65, 0x78, 0x69, 0x62, 0x69, 0x6c, 0x69, 0x74, 0x79, 0x2e, 0x0 // @2645 "ST has built a new architecture to reach best-in-class ultra-low-power figures thanks to its high flexibility."
};

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern const uint32_t indicesGb[] TEXT_LOCATION_FLASH_ATTRIBUTE;

// Array holding dynamically installed languages
struct TranslationHeader
{
    uint32_t offset_to_texts;
    uint32_t offset_to_indices;
    uint32_t offset_to_typedtext;
};
static const TranslationHeader* languagesArray[1] = { 0 };

// Compiled and linked in languages
static const uint32_t* const staticLanguageIndices[] = {
    indicesGb
};

touchgfx::LanguageId touchgfx::Texts::currentLanguage = static_cast<touchgfx::LanguageId>(0);
static const touchgfx::Unicode::UnicodeChar* currentLanguagePtr = 0;
static const uint32_t* currentLanguageIndices = 0;

void touchgfx::Texts::setLanguage(touchgfx::LanguageId id)
{
    const touchgfx::TypedText::TypedTextData* currentLanguageTypedText = 0;
    if (id < 1)
    {
        if (languagesArray[id] != 0)
        {
            // Dynamic translation is added
            const TranslationHeader* translation = languagesArray[id];
            currentLanguagePtr = (const touchgfx::Unicode::UnicodeChar*)(((const uint8_t*)translation) + translation->offset_to_texts);
            currentLanguageIndices = (const uint32_t*)(((const uint8_t*)translation) + translation->offset_to_indices);
            currentLanguageTypedText = (const touchgfx::TypedText::TypedTextData*)(((const uint8_t*)translation) + translation->offset_to_typedtext);
        }
        else
        {
            // Compiled and linked in languages
            currentLanguagePtr = texts_all_languages;
            currentLanguageIndices = staticLanguageIndices[id];
            currentLanguageTypedText = typedTextDatabaseArray[id];
        }
    }

    if (currentLanguageTypedText)
    {
        currentLanguage = id;
        touchgfx::TypedText::registerTypedTextDatabase(currentLanguageTypedText,
                                                       TypedTextDatabase::getFonts(), TypedTextDatabase::getInstanceSize());
    }
}

void touchgfx::Texts::setTranslation(touchgfx::LanguageId id, const void* translation)
{
    languagesArray[id] = (const TranslationHeader*)translation;
}

const touchgfx::Unicode::UnicodeChar* touchgfx::Texts::getText(TypedTextId id) const
{
    return &currentLanguagePtr[currentLanguageIndices[id]];
}