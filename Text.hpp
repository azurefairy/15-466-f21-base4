#pragma once

#include <ft2build.h>
#include FT_FREETYPE_H

#include <hb.h>
#include <hb-ft.h>

#include <string>

struct Text {
    Text();
    ~Text();

    FT_Library ft_library;
    FT_Face ft_face;
    FT_error ft_error;

    hb_font_t *hb_font;
    hb_buffer_t *hb_buf;

    void shape_text(std::string &text, int32_t x, int32_t y);
}