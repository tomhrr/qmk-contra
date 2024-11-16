## qmk-contra

QMK Contra keymap, for the 4x12 layout, mostly based on the default
keymap for that layout.

### Notes

 - Apart from the default layer, only one additional layer (accessed
   via raise) is defined.
 - The default layer is like so:

```
,-----------------------------------------------------------------------------------.
| Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
|------+------+------+------+------+-------------+------+------+------+------+------|
| Ctrl |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |Enter |
|------+------+------+------+------+------|------+------+------+------+------+------|
|      |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |      |
|------+------+------+------+------+------+------+------+------+------+------+------|
|      |      |      |      |Shift |Space |Raise | Alt  |      |      |      |      |
`-----------------------------------------------------------------------------------'
```

 - The raise layer is like so:

```
,-----------------------------------------------------------------------------------.
| Tab  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
|------+------+------+------+------+-------------+------+------+------+------+------|
|   |  |   <  |   >  |   -  |   _  |   '  |   "  |   =  |   +  |   [  |   ]  |  \   |
|------+------+------+------+------+------|------+------+------+------+------+------|
|      |      |      |      |      |      |      |      |      |      |      |      |
|------+------+------+------+------+------+------+------+------+------+------+------|
|      |      |      |      |      |      |      |      |      |      |      |      |
`-----------------------------------------------------------------------------------'
```

 - All of the blanks on the default layer have no effect, while all of
   the blanks on the raise layer pass through to the default layer.
 - Moving shift to the thumb helps to keep the other fingers on the
   home row, as well as avoiding the need to switch fingers when
   shifting for the column for which the fifth finger would usually be
   used.  Having to switch between shift and space on the left thumb
   all the time is arguably not great, though.
