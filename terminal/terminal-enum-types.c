


#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#undef GTK_DISABLE_DEPRECATED
#define GTK_ENABLE_BROKEN
#include <terminal/terminal-enum-types.h>
#include <terminal/terminal-app.h>
#include <terminal/terminal-preferences.h>
 
/* enumerations from "terminal-preferences.h" */
GType
terminal_scrollbar_get_type (void)
{
	static GType type = 0;
	if (type == 0) {
	static const GEnumValue values[] = {
 	{ TERMINAL_SCROLLBAR_NONE, "TERMINAL_SCROLLBAR_NONE", "none" },
 	{ TERMINAL_SCROLLBAR_LEFT, "TERMINAL_SCROLLBAR_LEFT", "left" },
 	{ TERMINAL_SCROLLBAR_RIGHT, "TERMINAL_SCROLLBAR_RIGHT", "right" },
 	{ 0, NULL, NULL }
	};
	type = g_enum_register_static ("TerminalScrollbar", values);
  }
	return type;
}
GType
terminal_title_get_type (void)
{
	static GType type = 0;
	if (type == 0) {
	static const GEnumValue values[] = {
 	{ TERMINAL_TITLE_REPLACE, "TERMINAL_TITLE_REPLACE", "replace" },
 	{ TERMINAL_TITLE_PREPEND, "TERMINAL_TITLE_PREPEND", "prepend" },
 	{ TERMINAL_TITLE_APPEND, "TERMINAL_TITLE_APPEND", "append" },
 	{ TERMINAL_TITLE_HIDE, "TERMINAL_TITLE_HIDE", "hide" },
 	{ TERMINAL_TITLE_DEFAULT, "TERMINAL_TITLE_DEFAULT", "default" },
 	{ 0, NULL, NULL }
	};
	type = g_enum_register_static ("TerminalTitle", values);
  }
	return type;
}
GType
terminal_background_get_type (void)
{
	static GType type = 0;
	if (type == 0) {
	static const GEnumValue values[] = {
 	{ TERMINAL_BACKGROUND_SOLID, "TERMINAL_BACKGROUND_SOLID", "solid" },
 	{ TERMINAL_BACKGROUND_IMAGE, "TERMINAL_BACKGROUND_IMAGE", "image" },
 	{ TERMINAL_BACKGROUND_TRANSPARENT, "TERMINAL_BACKGROUND_TRANSPARENT", "transparent" },
 	{ 0, NULL, NULL }
	};
	type = g_enum_register_static ("TerminalBackground", values);
  }
	return type;
}
GType
terminal_background_style_get_type (void)
{
	static GType type = 0;
	if (type == 0) {
	static const GEnumValue values[] = {
 	{ TERMINAL_BACKGROUND_STYLE_TILED, "TERMINAL_BACKGROUND_STYLE_TILED", "tiled" },
 	{ TERMINAL_BACKGROUND_STYLE_CENTERED, "TERMINAL_BACKGROUND_STYLE_CENTERED", "centered" },
 	{ TERMINAL_BACKGROUND_STYLE_SCALED, "TERMINAL_BACKGROUND_STYLE_SCALED", "scaled" },
 	{ TERMINAL_BACKGROUND_STYLE_STRETCHED, "TERMINAL_BACKGROUND_STYLE_STRETCHED", "stretched" },
 	{ 0, NULL, NULL }
	};
	type = g_enum_register_static ("TerminalBackgroundStyle", values);
  }
	return type;
}
GType
terminal_erase_binding_get_type (void)
{
	static GType type = 0;
	if (type == 0) {
	static const GEnumValue values[] = {
 	{ TERMINAL_ERASE_BINDING_AUTO, "TERMINAL_ERASE_BINDING_AUTO", "auto" },
 	{ TERMINAL_ERASE_BINDING_ASCII_DELETE, "TERMINAL_ERASE_BINDING_ASCII_DELETE", "ascii-delete" },
 	{ TERMINAL_ERASE_BINDING_DELETE_SEQUENCE, "TERMINAL_ERASE_BINDING_DELETE_SEQUENCE", "delete-sequence" },
 	{ TERMINAL_ERASE_BINDING_ASCII_BACKSPACE, "TERMINAL_ERASE_BINDING_ASCII_BACKSPACE", "ascii-backspace" },
 	{ TERMINAL_ERASE_BINDING_ERASE_TTY, "TERMINAL_ERASE_BINDING_ERASE_TTY", "erase-tty" },
 	{ 0, NULL, NULL }
	};
	type = g_enum_register_static ("TerminalEraseBinding", values);
  }
	return type;
}
GType
terminal_ambiguous_width_binding_get_type (void)
{
	static GType type = 0;
	if (type == 0) {
	static const GEnumValue values[] = {
 	{ TERMINAL_AMBIGUOUS_WIDTH_BINDING_NARROW, "TERMINAL_AMBIGUOUS_WIDTH_BINDING_NARROW", "narrow" },
 	{ TERMINAL_AMBIGUOUS_WIDTH_BINDING_WIDE, "TERMINAL_AMBIGUOUS_WIDTH_BINDING_WIDE", "wide" },
 	{ 0, NULL, NULL }
	};
	type = g_enum_register_static ("TerminalAmbiguousWidthBinding", values);
  }
	return type;
}
GType
terminal_cursor_shape_get_type (void)
{
	static GType type = 0;
	if (type == 0) {
	static const GEnumValue values[] = {
 	{ TERMINAL_CURSOR_SHAPE_BLOCK, "TERMINAL_CURSOR_SHAPE_BLOCK", "block" },
 	{ TERMINAL_CURSOR_SHAPE_IBEAM, "TERMINAL_CURSOR_SHAPE_IBEAM", "ibeam" },
 	{ TERMINAL_CURSOR_SHAPE_UNDERLINE, "TERMINAL_CURSOR_SHAPE_UNDERLINE", "underline" },
 	{ 0, NULL, NULL }
	};
	type = g_enum_register_static ("TerminalCursorShape", values);
  }
	return type;
}



