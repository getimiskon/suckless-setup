/* Custom changes to the original config.h file */

const unsigned int interval = 100;

static const char unknown_str[] = "n/a";

#define MAXLEN 2048

static const struct arg args[] = {
	{ wifi_essid, "Wi-Fi: %s - ",        "wlan0" },
	{ wifi_perc, "%s% | ",                 "wlan0" },
	{ battery_perc, "Bat.: %s% | ",        "BAT1" },
	{ keymap, "%s | ",                     "null" },
	{ datetime, "%s",                   "%F %T" },
};
