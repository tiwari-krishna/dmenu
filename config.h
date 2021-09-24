/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Ubuntu:size=10",
    "JoyPixels:size=10"
};
static const char *prompt      = {"Run:"};      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#0d83b5" },
    [SchemeSelHighlight] = { "#d7d7d7", "#000000" },
    [SchemeNormHighlight] = { "#a5bdf8", "#000000" },
	[SchemeOut] = { "#000000", "#00ffff" },
    [SchemeOutHighlight] = { "#d7d7d7", "#1f2026" },
    [SchemeHp] = { "#bbbbbb", "#333333" }
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Use prefix matching by default; can be inverted with the -x flag.
 */
static int use_prefix = 1;
