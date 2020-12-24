# suckless-setup
My personal suckless configs

## Installation

To install any programs (dwm, dmenu, st, slstatus or slock), go to the directory of the program you want to compile and run `sudo make install`.

## Changes from the original configuration

### All programs

* The font is Inconsolata LGC (with support for Greek and Cyrillic scripts, alongside Latin)
* Applied the dwm-alpha patch, except from dmenu (In order to be used, you need to have a compositor like `compton`/`picom` installed)

### dwm

* The modifier key is changed from `Mod1Mask`(Alt key) to `Mod4Mask` (Super/Meta/Windows key)
* Applied the dwm-gaps patch (the gaps pixels are 5px and the window borders are 1px)

* Changed the `col_cyan` variable with the `col_custom` one (the value here is `#6e6e6e`)
* Applied the patch for emojis by using the `libxft-bgra` package
* Removed the label part from the top bar.
* The `Mod+Shift+Enter` key combination launches `kitty` instead of `st`

### dmenu

* The font is Inconsolata LGC
* Added a custom prompt
* Vertical list instead of a horizontal one, with 5 lines
* Same color scheme (set up from the dwm configuration)

### slstatus

* The interval between updates is set to `100`
* The values that appear are: Wi-Fi percentage, volume percentage (through `pamixer`), battery percentage, keyboard layout, keyboard indicators, date (in dd/mm/yyyy format) and time.

## Troubleshooting

### Installation on Void Linux

In order to install dwm (and other programs from suckless), you need to install the `base-devel`, `X11-devel`, `libXft-devel` and `libXinerama-devel` packages. You also need to change the `X11INC` and `X11LIB` directories to `/usr/include/X11` and `/usr/lib/X11`.

### Firefox appears in the 9th tag
To fix this issue, open the `config.h` file of dwm and change the `tags_mask` value in the Rules section from `1 << 8` to `0`. Save the file and recompile dwm.

## Useful Links

[suckless.org](https://suckless.org)

[dwm](https://dwm.suckless.org)

[dmenu](https://tools.suckless.org/dmenu)

[st](https://st.suckless.org)

[suckless programs hacking](https://suckless.org/hacking)