/*
 * thumby_rgb565.h — pack 8-bit RGB into the 16-bit pixels of g_fb.
 *
 * The Thumby Color LCD takes standard RGB565 (red in the top 5 bits).
 * chili-doom (CHILI_BLIT) hands g_fb to the 32blit SDK as its screen, and
 * 32blit's RGB565 keeps red in the low 5 bits and blue in the top 5.
 */
#ifndef THUMBY_RGB565_H
#define THUMBY_RGB565_H

#if CHILI_BLIT
#define THUMBY_RGB565(r, g, b) \
    (uint16_t)((((b) >> 3) << 11) | (((g) >> 2) << 5) | ((r) >> 3))
#else
#define THUMBY_RGB565(r, g, b) \
    (uint16_t)((((r) >> 3) << 11) | (((g) >> 2) << 5) | ((b) >> 3))
#endif

#endif
