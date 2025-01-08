## qmk-contra

QMK Contra keymap, for the 4x12 layout, mostly based on the default
keymap for that layout.

### Notes

 - The default layer is like so:

```
,-----------------------------------------------------------------------------------.
| Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
|------+------+------+------+------+-------------+------+------+------+------+------|
|      |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |Enter |
|------+------+------+------+------+------|------+------+------+------+------+------|
|      |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |      |
|------+------+------+------+------+------+------+------+------+------+------+------|
|      |      |      |Lower |Shift |Space |Raise | Ctrl | Alt  |      |      |      |
`-----------------------------------------------------------------------------------'
```

 - The raise layer is like so:

```
,-----------------------------------------------------------------------------------.
| Tab  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
|------+------+------+------+------+-------------+------+------+------+------+------|
|      |   <  |   >  |   -  |   _  |   '  |   "  |   =  |   +  |   [  |   ]  |  \   |
|------+------+------+------+------+------|------+------+------+------+------+------|
|      |      |      |      |      |      |      |      |      |      |      |      |
|------+------+------+------+------+------+------+------+------+------+------+------|
|      |      |      |      |      |      |      |      |      |      |      |      |
`-----------------------------------------------------------------------------------'
```

 - The lower layer is like so:

```
,-----------------------------------------------------------------------------------.
|      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | Del  |
|------+------+------+------+------+-------------+------+------+------+------+------|
|      |   |  |   `  |   ~  |      |      |   ←  |   ↓  |   ↑  |   →  | PgUp | PgDn |
|------+------+------+------+------+------|------+------+------+------+------+------|
|      |      |      |      |      |      |      |      |      |      |      |      |
|------+------+------+------+------+------+------+------+------+------+------+------|
|      |      |      |      |      |      |      |      |      |      |      |      |
`-----------------------------------------------------------------------------------'
```

 - All of the blanks on the default layer have no effect, while all of
   the blanks on the raise and lower layers pass through to the
   default layer.
 - Moving shift and ctrl to the thumb helps to keep the other fingers
   on the home row, as well as avoiding the need to switch fingers
   when using the modifier along with the key that that finger would
   usually be used for.  The thumb key allocation is probably not
   optimal yet, though.
 - The shift behaviour has been removed for keys where the shifted key is
   available separately (e.g. comma and less-than).
