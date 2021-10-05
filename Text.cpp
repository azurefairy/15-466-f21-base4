#include "Text.hpp"
#include <string>
#include "data_path.hpp"
#include <iostream>

Text::Text() {
    error = FT_Init_FreeType( &ft_library );
    if (error) {
        std::cout << "error in freetype library initialization\n";
        exit(-1);
    }
    error = FT_New_Face( ft_library, data_path("tnf.ttf"), 0, &ft_face );
    if (error) {
        std::cout << "error in creating font face\n";
        exit(-1);
    }
    error = FT_Set_Char_Size( ft_face, 50*64, 0, 100, 0 );
    if (error) {
        std::cout << "error in setting font size\n";
        exit(-1);
    }

    hb_font = = hb_font_create(ft_face, NULL);
    hb_buf = hb_buffer_create();
    
}

Text::~Text() {
    hb_buffer_destroy(hb_buf);
    hb_font_destroy(hb_font);
    FT_Done_Face(ft_face);
    FT_Done_FreeType(ft_library);
}

void Text::shape_text(std::string &text, int32_t x, int32_t y) {
    hb_buffer_reset(hb_buf);
    hb_buffer_add_utf8(hb_buf, &(text[0]), -1, 0, -1);
    hb_buffer_guess_segment_properties(hb_buf);
    hb_shape(hb_font, hb_buf, NULL, 0);
}