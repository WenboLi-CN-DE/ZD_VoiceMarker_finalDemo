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
    0x2, 0x20, 0x20, 0x20, 0x20, 0x20, 0x54, 0x72, 0x69, 0x67, 0x67, 0x65, 0x72, 0x20, 0x53, 0x75, 0x63, 0x63, 0x65, 0x73, 0x73, 0x21, 0x21, 0x0, // @0 "<>     Trigger Success!!"
    0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x20, 0x72, 0x61, 0x74, 0x65, 0x3a, 0x20, 0x20, 0x2, 0x20, 0x48, 0x7a, 0x0, // @24 "Sample rate:  <> Hz"
    0x46, 0x69, 0x6c, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x3a, 0x20, 0x20, 0x20, 0x2, 0x20, 0x20, 0x4b, 0x42, 0x0, // @43 "FileSize:   <>  KB"
    0x4e, 0x65, 0x74, 0x77, 0x6f, 0x72, 0x6b, 0x20, 0x43, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x0, // @61 "Network Connection:"
    0x49, 0x50, 0x20, 0x41, 0x64, 0x64, 0x65, 0x72, 0x65, 0x73, 0x73, 0x28, 0x49, 0x50, 0x76, 0x34, 0x29, 0x3a, 0x0, // @81 "IP Adderess(IPv4):"
    0x49, 0x50, 0x20, 0x41, 0x64, 0x64, 0x65, 0x72, 0x65, 0x73, 0x73, 0x28, 0x49, 0x50, 0x76, 0x36, 0x29, 0x3a, 0x0, // @100 "IP Adderess(IPv6):"
    0x53, 0x65, 0x69, 0x72, 0x65, 0x73, 0x20, 0x4e, 0x75, 0x6d, 0x62, 0x65, 0x72, 0x3a, 0x2, 0x0, // @119 "Seires Number:<>"
    0x62, 0x61, 0x63, 0x6b, 0x20, 0x74, 0x6f, 0x20, 0x48, 0x6f, 0x6d, 0x65, 0x20, 0x50, 0x61, 0x67, 0x65, 0x0, // @135 "back to Home Page"
    0x54, 0x72, 0x69, 0x67, 0x67, 0x65, 0x72, 0x49, 0x6e, 0x66, 0x6f, 0x31, 0x3a, 0x2, 0x0, // @153 "TriggerInfo1:<>"
    0x56, 0x6f, 0x69, 0x63, 0x65, 0x4d, 0x61, 0x72, 0x6b, 0x65, 0x72, 0x20, 0x44, 0x65, 0x6d, 0x6f, 0x0, // @168 "VoiceMarker Demo"
    0x53, 0x53, 0x44, 0x20, 0x31, 0x20, 0x53, 0x74, 0x6f, 0x72, 0x61, 0x67, 0x65, 0x3a, 0x0, // @185 "SSD 1 Storage:"
    0x53, 0x53, 0x44, 0x20, 0x32, 0x20, 0x53, 0x74, 0x6f, 0x72, 0x61, 0x67, 0x65, 0x3a, 0x0, // @200 "SSD 2 Storage:"
    0x56, 0x6f, 0x69, 0x63, 0x65, 0x46, 0x69, 0x6c, 0x65, 0x20, 0x5f, 0x2, 0x0, // @215 "VoiceFile _<>"
    0x57, 0x6f, 0x72, 0x6b, 0x69, 0x6e, 0x67, 0x20, 0x53, 0x74, 0x61, 0x74, 0x65, 0x3a, 0x0, // @228 "Working State:"
    0x64, 0x69, 0x73, 0x6b, 0x6c, 0x6f, 0x61, 0x64, 0x3a, 0x20, 0x20, 0x2, 0x0, // @243 "diskload:  <>"
    0x74, 0x69, 0x6d, 0x65, 0x3a, 0x20, 0x20, 0x2, 0x3a, 0x2, 0x0, // @256 "time:  <>:<>"
    0x42, 0x65, 0x72, 0x6c, 0x69, 0x6e, 0x2f, 0x45, 0x75, 0x72, 0x6f, 0x70, 0x61, 0x0, // @267 "Berlin/Europa"
    0x53, 0x74, 0x61, 0x72, 0x74, 0x20, 0x4d, 0x6f, 0x6e, 0x69, 0x74, 0x6f, 0x72, 0x0, // @281 "Start Monitor"
    0x54, 0x72, 0x69, 0x67, 0x67, 0x65, 0x72, 0x49, 0x6e, 0x66, 0x6f, 0x20, 0x31, 0x0, // @295 "TriggerInfo 1"
    0x56, 0x6f, 0x69, 0x63, 0x65, 0x46, 0x69, 0x6c, 0x65, 0x5f, 0x2, 0x0, // @309 "VoiceFile_<>"
    0x57, 0x6f, 0x72, 0x6b, 0x69, 0x6e, 0x67, 0x20, 0x54, 0x69, 0x6d, 0x65, 0x3a, 0x0, // @321 "Working Time:"
    0x44, 0x69, 0x73, 0x6b, 0x6c, 0x6f, 0x61, 0x64, 0x3a, 0x2, 0x0, // @335 "Diskload:<>"
    0x4d, 0x61, 0x63, 0x20, 0x41, 0x64, 0x64, 0x72, 0x65, 0x73, 0x73, 0x3a, 0x0, // @346 "Mac Address:"
    0x4d, 0x65, 0x6d, 0x6f, 0x72, 0x79, 0x3a, 0x20, 0x2, 0x25, 0x0, // @359 "Memory: <>%"
    0x53, 0x53, 0x44, 0x20, 0x31, 0x20, 0x53, 0x74, 0x61, 0x74, 0x65, 0x3a, 0x0, // @370 "SSD 1 State:"
    0x53, 0x53, 0x44, 0x20, 0x32, 0x20, 0x53, 0x74, 0x61, 0x74, 0x65, 0x3a, 0x0, // @383 "SSD 2 State:"
    0x53, 0x75, 0x62, 0x6e, 0x65, 0x74, 0x20, 0x4d, 0x61, 0x73, 0x6b, 0x3a, 0x0, // @396 "Subnet Mask:"
    0x56, 0x6f, 0x63, 0x69, 0x65, 0x20, 0x4d, 0x61, 0x72, 0x6b, 0x65, 0x72, 0x0, // @409 "Vocie Marker"
    0x57, 0x6f, 0x72, 0x6b, 0x69, 0x6e, 0x67, 0x20, 0x4d, 0x6f, 0x64, 0x65, 0x0, // @422 "Working Mode"
    0x44, 0x69, 0x73, 0x6b, 0x3a, 0x20, 0x2, 0x25, 0x0, // @435 "Disk: <>%"
    0x49, 0x6e, 0x66, 0x6f, 0x6d, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x0, // @444 "Infomation"
    0x64, 0x69, 0x73, 0x6b, 0x3a, 0x20, 0x2, 0x25, 0x0, // @455 "disk: <>%"
    0x7a, 0x6f, 0x6e, 0x65, 0x3a, 0x20, 0x20, 0x2, 0x0, // @464 "zone:  <>"
    0x43, 0x50, 0x55, 0x3a, 0x20, 0x2, 0x25, 0x0, // @473 "CPU: <>%"
    0x48, 0x54, 0x54, 0x50, 0x20, 0x50, 0x6f, 0x73, 0x74, 0x0, // @481 "HTTP Post"
    0x54, 0x69, 0x6d, 0x65, 0x3a, 0x20, 0x2, 0x0, // @491 "Time: <>"
    0x63, 0x70, 0x75, 0x3a, 0x20, 0x2, 0x25, 0x0, // @499 "cpu: <>%"
    0x6d, 0x65, 0x6d, 0x3a, 0x20, 0x2, 0x25, 0x0, // @507 "mem: <>%"
    0x74, 0x69, 0x6d, 0x65, 0x3a, 0x20, 0x2, 0x0, // @515 "time: <>"
    0x42, 0x75, 0x73, 0x20, 0x4c, 0x6f, 0x61, 0x64, 0x0, // @523 "Bus Load"
    0x45, 0x74, 0x68, 0x65, 0x72, 0x6e, 0x65, 0x74, 0x0, // @532 "Ethernet"
    0x48, 0x54, 0x54, 0x50, 0x20, 0x47, 0x65, 0x74, 0x0, // @541 "HTTP Get"
    0x54, 0x66, 0x74, 0x70, 0x20, 0x47, 0x65, 0x74, 0x0, // @550 "Tftp Get"
    0x54, 0x66, 0x74, 0x70, 0x20, 0x50, 0x75, 0x74, 0x0, // @559 "Tftp Put"
    0x5a, 0x6f, 0x6e, 0x65, 0x3a, 0x2, 0x0, // @568 "Zone:<>"
    0x46, 0x6c, 0x65, 0x78, 0x72, 0x61, 0x79, 0x0, // @575 "Flexray"
    0x46, 0x74, 0x70, 0x20, 0x47, 0x65, 0x74, 0x0, // @583 "Ftp Get"
    0x46, 0x74, 0x70, 0x20, 0x50, 0x75, 0x74, 0x0, // @591 "Ftp Put"
    0x4e, 0x65, 0x74, 0x77, 0x6f, 0x72, 0x6b, 0x0, // @599 "Network"
    0x53, 0x65, 0x74, 0x74, 0x69, 0x6e, 0x67, 0x0, // @607 "Setting"
    0x54, 0x72, 0x69, 0x67, 0x67, 0x65, 0x72, 0x0, // @615 "Trigger"
    0x43, 0x61, 0x6d, 0x65, 0x72, 0x61, 0x0, // @623 "Camera"
    0x53, 0x70, 0x65, 0x65, 0x64, 0x3a, 0x0, // @630 "Speed:"
    0x30, 0x3a, 0x30, 0x3a, 0x30, 0x0, // @637 "0:0:0"
    0x43, 0x41, 0x4e, 0x31, 0x30, 0x0, // @643 "CAN10"
    0x43, 0x41, 0x4e, 0x31, 0x31, 0x0, // @649 "CAN11"
    0x43, 0x41, 0x4e, 0x31, 0x32, 0x0, // @655 "CAN12"
    0x43, 0x41, 0x4e, 0x31, 0x33, 0x0, // @661 "CAN13"
    0x43, 0x41, 0x4e, 0x31, 0x34, 0x0, // @667 "CAN14"
    0x43, 0x41, 0x4e, 0x31, 0x35, 0x0, // @673 "CAN15"
    0x43, 0x41, 0x4e, 0x31, 0x36, 0x0, // @679 "CAN16"
    0x43, 0x41, 0x4e, 0x31, 0x37, 0x0, // @685 "CAN17"
    0x43, 0x41, 0x4e, 0x31, 0x38, 0x0, // @691 "CAN18"
    0x46, 0x69, 0x6c, 0x65, 0x3a, 0x0, // @697 "File:"
    0x50, 0x6f, 0x72, 0x74, 0x31, 0x0, // @703 "Port1"
    0x50, 0x6f, 0x72, 0x74, 0x32, 0x0, // @709 "Port2"
    0x50, 0x6f, 0x72, 0x74, 0x33, 0x0, // @715 "Port3"
    0x50, 0x6f, 0x72, 0x74, 0x34, 0x0, // @721 "Port4"
    0x55, 0x41, 0x52, 0x54, 0x31, 0x0, // @727 "UART1"
    0x55, 0x41, 0x52, 0x54, 0x32, 0x0, // @733 "UART2"
    0x55, 0x41, 0x52, 0x54, 0x33, 0x0, // @739 "UART3"
    0x55, 0x41, 0x52, 0x54, 0x34, 0x0, // @745 "UART4"
    0x55, 0x41, 0x52, 0x54, 0x35, 0x0, // @751 "UART5"
    0x55, 0x41, 0x52, 0x54, 0x36, 0x0, // @757 "UART6"
    0x55, 0x41, 0x52, 0x54, 0x37, 0x0, // @763 "UART7"
    0x55, 0x41, 0x52, 0x54, 0x38, 0x0, // @769 "UART8"
    0x43, 0x41, 0x4e, 0x31, 0x0, // @775 "CAN1"
    0x43, 0x41, 0x4e, 0x32, 0x0, // @780 "CAN2"
    0x43, 0x41, 0x4e, 0x33, 0x0, // @785 "CAN3"
    0x43, 0x41, 0x4e, 0x34, 0x0, // @790 "CAN4"
    0x43, 0x41, 0x4e, 0x35, 0x0, // @795 "CAN5"
    0x43, 0x41, 0x4e, 0x36, 0x0, // @800 "CAN6"
    0x43, 0x41, 0x4e, 0x37, 0x0, // @805 "CAN7"
    0x43, 0x41, 0x4e, 0x38, 0x0, // @810 "CAN8"
    0x43, 0x41, 0x4e, 0x39, 0x0, // @815 "CAN9"
    0x45, 0x54, 0x48, 0x31, 0x0, // @820 "ETH1"
    0x45, 0x54, 0x48, 0x32, 0x0, // @825 "ETH2"
    0x45, 0x54, 0x48, 0x33, 0x0, // @830 "ETH3"
    0x45, 0x54, 0x48, 0x34, 0x0, // @835 "ETH4"
    0x46, 0x4c, 0x58, 0x31, 0x0, // @840 "FLX1"
    0x46, 0x4c, 0x58, 0x32, 0x0, // @845 "FLX2"
    0x46, 0x4c, 0x58, 0x33, 0x0, // @850 "FLX3"
    0x46, 0x4c, 0x58, 0x34, 0x0, // @855 "FLX4"
    0x4c, 0x49, 0x4e, 0x31, 0x0, // @860 "LIN1"
    0x4c, 0x49, 0x4e, 0x32, 0x0, // @865 "LIN2"
    0x4c, 0x49, 0x4e, 0x33, 0x0, // @870 "LIN3"
    0x4c, 0x49, 0x4e, 0x34, 0x0, // @875 "LIN4"
    0x4c, 0x49, 0x4e, 0x35, 0x0, // @880 "LIN5"
    0x4c, 0x49, 0x4e, 0x36, 0x0, // @885 "LIN6"
    0x4c, 0x49, 0x4e, 0x37, 0x0, // @890 "LIN7"
    0x4c, 0x49, 0x4e, 0x38, 0x0, // @895 "LIN8"
    0x55, 0x41, 0x52, 0x54, 0x0, // @900 "UART"
    0x57, 0x4c, 0x41, 0x4e, 0x0, // @905 "WLAN"
    0x43, 0x41, 0x4e, 0x0, // @910 "CAN"
    0x4c, 0x49, 0x4e, 0x0, // @914 "LIN"
    0x37, 0x30, 0x0 // @918 "70"
};

TEXT_LOCATION_FLASH_PRAGMA
KEEP extern uint32_t const indicesGb[] TEXT_LOCATION_FLASH_ATTRIBUTE;

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
