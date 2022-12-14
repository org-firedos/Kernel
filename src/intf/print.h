#pragma once

#include <stdint.h>
#include <stddef.h>

#define print_error(err, _operation) {print_str(_operation);print_str(": ");print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK); print_str(err);print_set_color(PRINT_COLOR_LIGHT_GRAY, PRINT_COLOR_BLACK);}
#define print_sucess(msg, _operation) {print_str(_operation);print_str(": ");print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK); print_str(msg);print_set_color(PRINT_COLOR_LIGHT_GRAY, PRINT_COLOR_BLACK);}
#define print_warning(warn, _operation) {print_str(_operation);print_str(": ");print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK); print_str(warn);print_set_color(PRINT_COLOR_LIGHT_GRAY, PRINT_COLOR_BLACK);}


enum {
    PRINT_COLOR_BLACK = 0,
	PRINT_COLOR_BLUE = 1,
	PRINT_COLOR_GREEN = 2,
	PRINT_COLOR_CYAN = 3,
	PRINT_COLOR_RED = 4,
	PRINT_COLOR_MAGENTA = 5,
	PRINT_COLOR_BROWN = 6,
	PRINT_COLOR_LIGHT_GRAY = 7,
	PRINT_COLOR_DARK_GRAY = 8,
	PRINT_COLOR_LIGHT_BLUE = 9,
	PRINT_COLOR_LIGHT_GREEN = 10,
	PRINT_COLOR_LIGHT_CYAN = 11,
	PRINT_COLOR_LIGHT_RED = 12,
	PRINT_COLOR_PINK = 13,
	PRINT_COLOR_YELLOW = 14,
	PRINT_COLOR_WHITE = 15,
};

void print_clear();
void print_char(char character);
void print_str(char* string);
void print_set_color(uint8_t foreground, uint8_t background);
