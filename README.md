> Epitech Project 2021 <br>
> B1 - Elementary Programming in C <br>
> B-CPE-110

# {EPITECH} - BSQ
#### find the Biggest SQuare (1D Array Version)

### Coding Style
- style mark: 0
- style major: 1
- style minor: 1
- style info: 0
<br>

### Note : 97.4%
- 01: 5/5
- 02: 2/2
- 03: 5/5
- 04: 5/5
- 05: 5/5
- 06: 5/5
- 07: 2/2
- 08: 10/10
- 09: 2/4

### Coverage: 74%
<br>

### Content
**binary name**: bsq<br>
**language**: C<br>
**build tool**: via Makefile, including re, all, clean, fclean [my_tests, tests_run, cover, tests_file] rules
<br>

### Authorized Functions
The only system calls allowed are the following ones:
- open
- read
- write
- close
- malloc
- free
- stat

### Goal
You must find the largest possible square on a board while avoiding obstacles.<br>
The board is represented by a file passed as the program’s argument. The file is valid if it is respecting those
constraints:

- its first line contains the number of lines on the board (and only that),
- “.” (representing an empty place) and “o” (representing an obstacle) are the only two characters for the
other lines,
- all of the lines are of the same length (except the first one),
- it contains at least one line,
- each line is terminated by ‘\n’.

You program must print the board, with some “.” replaced by “x” to represent the largest square you found.
<br>

> If ever there are several solutions, you have to represent only the highest square.<br>
> If they are still several solutions, choose the square to the left.

### Examples
```T
∼/B-CPE-110> cat -e example_file
9$
...........................$
....o......................$
............o..............$
...........................$
....o......................$
..............o............$
...........................$
......o..............o.....$
..o.......o................$
```
```T
∼/B-CPE-110> ./bsq example_file
.....xxxxxxx................
....oxxxxxxx................
.....xxxxxxxo...............
.....xxxxxxx................
....oxxxxxxx................
.....xxxxxxx...o............
.....xxxxxxx................
......o...............o.....
..o.......o.................
```

> It’s definitely a square, even if visually it doesn’t look like one.

<br>

>- **Student:** Adrien VERMERSCH
>-  **Email:** adrien.vermersch@epitech.eu
>- **Year:** 2021
>- **Promotion:** 2026
>- **Campus:** Bordeaux

Code rédigé selon la norme Epitech (promo 2026).<br><br>
Recopier ce repo revient au vol de code.<br>
Autrement dit, -42<br><br>
